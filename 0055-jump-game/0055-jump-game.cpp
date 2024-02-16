class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx=0;
        bool ans=true;
        for(int i=0;i<nums.size()-1;i++){
            mx=max(nums[i],mx);
            if(mx<=0) {
                ans=false;
                break;
            }
            mx--;
        }
        return ans;

    }
};