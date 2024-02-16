class Solution {
public:
    int maxArea(vector<int>& v) {
        int i=0,j=v.size()-1;
        int area=(min(v[0],v[j]))*(j-i);
        while(i<j){
            area=max(((min(v[i],v[j]))*(j-i)),area);
            if(v[i]<=v[j]) i++;
            else j--;
        }
      return area;
    }
};