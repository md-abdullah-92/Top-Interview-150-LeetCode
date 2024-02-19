class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
         vector<vector<int>>vp;
         set<vector<int>>s;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            int j=i+1,k=v.size()-1;
           while(j<k){
               int sum=v[i]+v[j]+v[k];
               if((sum)==0){
                   s.insert({v[i],v[j],v[k]});
                   j++;
                   k--;
               }
               else if(sum>0) k--;
               else j++;
           }

        }
        for(auto vs:s) vp.push_back(vs);
        return vp;
    }
};