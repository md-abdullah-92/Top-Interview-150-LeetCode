class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=0;
        map<int,int>mp;
         for(int i = 0; i< nums.size(); i++){
             mp[nums[i]]++;
            if(mp[nums[i]]<=2){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};