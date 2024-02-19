class Solution {
public:
    int searchInsert(vector<int>& v, int x) {
        int hi=v.size()-1,lo=0;
        int ans=0;
        while(hi>=lo){
            int mid=(hi+lo)/2;
            if(v[mid]==x){
                return mid;
            }
            else if(v[mid]<x){
                ans=mid+1;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};