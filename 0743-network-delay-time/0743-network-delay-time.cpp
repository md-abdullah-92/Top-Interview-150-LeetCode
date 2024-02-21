class Solution {
#define ll long long
    const ll N = 2e5 + 10;
    const ll inf = 1e16;

public:
    ll dijkstra(ll source, ll n, vector<pair<ll, ll>> adj[]) {
        vector<ll> dist(N, inf);
        vector<ll> vis(N, 0);
        set<pair<ll, ll>> st;
        st.insert({0, source});
        dist[source] = 0;
        while (!st.empty()) {
            auto node = *st.begin();
            ll distance = node.first;
            ll v = node.second;
            st.erase(st.begin());
            if (vis[v])
                continue;
            vis[v] = 1;
            for (auto child : adj[v]) {
                ll child_v = child.first;
                ll wt = child.second;
                if (distance + wt < dist[child_v]) {
                    st.erase({dist[child_v], child_v});
                    dist[child_v] = distance + wt;
                    st.insert({dist[child_v], child_v});
                }
            }
        }
        ll ans = 0;
        for (ll i = 1; i <= n; i++) {
            if (dist[i] == inf)
                return -1;
            ans = max(ans, dist[i]);
        }
        return ans;
    }

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<ll, ll>> adj[n + 1];
        for (auto x : times) {
            adj[x[0]].push_back({x[1], x[2]});
        }
        return dijkstra(k, n, adj);
    }
};