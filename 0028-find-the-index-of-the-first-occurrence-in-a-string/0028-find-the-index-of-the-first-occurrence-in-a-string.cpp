class Solution {
public:
    long long strStr(string txt, string pat ) {                               
         auto it = search(txt.begin(), txt.end(), pat.begin(), pat.end());
        if (it != txt.end()) {
            return it - txt.begin();
        }
        return -1; 
    }
};
