class Solution {
public:
    long long strStr(string txt, string pat ) {
            int x = pat.size();                               
        for (int i = 0; i < txt.size(); i++) {         
            if (pat == txt.substr(i, x)) {         
                return i;                                 
            }
        }
        return -1;  
    }
};