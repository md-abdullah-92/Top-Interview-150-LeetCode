class Solution {
public:
    int isSubsequence(string s, string t) {
        int k=0,i=0;
        while(s.size()>i&&t.size()>k){
            if(s[i]==t[k]) i++;
            k++;;
        }
        return (i==s.size());
    }
};