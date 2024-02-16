class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int nums_zero=0;
        int ans=1;
        for(int k:nums){
            if(k==0) nums_zero++;
            else{
                ans*=k;
            }
        }
        vector<int>v(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums_zero>1){
                v[i]=0;
            }
            else if(nums_zero==1){
                if(nums[i]==0){
                    v[i]=ans;
                }
                else v[i]=0;
            }
            else{
                v[i]=(ans/nums[i]);
            }
        }
        return v;
        
        
    }
};