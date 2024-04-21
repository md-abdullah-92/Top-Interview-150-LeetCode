
class Solution {
vector<int>adj[200001];
int vis[200001];
public:
      void dfs(int x){
          vis[x]=1;
          for(int child: adj[x]){
              if(vis[child]) continue;
              dfs(child);
          }
      }
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        for(auto x: edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);   
        }
        dfs(source);
        
        return vis[destination];
        
    }
};