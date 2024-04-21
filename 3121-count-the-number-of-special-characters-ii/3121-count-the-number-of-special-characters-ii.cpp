class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int>mp;
        int c=0,i=1;
        for(char k:word){
            if(k>='a') mp[k]=i;
            if(k<'a'&&mp[k]==0) mp[k]=i;
            i++;
        }
        for(char i='a';i<='z';i++){
            if(mp[i]&&mp[i]<mp[(char)toupper(i)]) c++;
        }
        return c;
    }
};