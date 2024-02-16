class Solution {
    int dp[10010];
    int fun(vector<int>& coins, int amount){
        if(amount==0) return 0;
        if(dp[amount]!=-1) return dp[amount];
        int ans=INT_MAX-1;
        for(int p:coins){
            if(amount-p>=0){
                ans=min(ans,fun(coins,amount-p)+1);
            }
        }
        return dp[amount]=ans;
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        
        memset(dp,-1,sizeof(dp));
        int ans=fun(coins,amount);
        if(ans==INT_MAX-1) return -1;
        return ans;
    }
};