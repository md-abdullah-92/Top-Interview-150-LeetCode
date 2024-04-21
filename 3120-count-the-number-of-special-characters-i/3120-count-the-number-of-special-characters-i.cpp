class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int>mp;
        for(char k: word){
            mp[k]++;
        }
        int c=0;
        for(char i='a';i<='z';i++){
            if(mp[i]&&mp[(char)toupper(i)]) c++;
        }
        return c;
        
    }
    
};