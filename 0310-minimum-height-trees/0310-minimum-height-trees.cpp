class Solution {
    vector<int> adj[20005];

public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n == 1)
            return {0};
        map<int, int> mp;
        for (auto k : edges) {
            mp[k[0]]++;
            mp[k[1]]++;
            adj[k[0]].push_back(k[1]);
            adj[k[1]].push_back(k[0]);
        }
        queue<int> q;
        for (int i = 0; i < n; i++) {
            if (mp[i] == 1) {
                q.push(i);
            }
        }
        int size = 0;
        while (n - size > 2) {
            int p = q.size();
            size += q.size();
            for (int i = 0; i < p; i++) {
                int poll = q.front();
                q.pop();
                for (int k : adj[poll]) {
                    if (--mp[k] == 1) {
                        q.push(k);
                    }
                }
            }
        }
        vector<int> result;
        while (!q.empty()) {
            result.push_back(q.front());
            q.pop();
        }
        return result;
    }
};
