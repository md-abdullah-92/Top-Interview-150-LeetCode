class Solution {
public:
    int dp[400];
    int fun(int n,vector<int>&v){
        if(n==v.size()-1)  return v[n];
        if(n>=v.size()) return 0;
        if(dp[n]!=-1) return dp[n];
        int p1=fun(n+1,v)+0;
        int p2=fun(n+2,v)+v[n];
        return dp[n]=max(p1,p2);
    }
    int rob(vector<int>& v) {
        memset(dp,-1,sizeof(dp));
        return fun(0,v);
    }
};