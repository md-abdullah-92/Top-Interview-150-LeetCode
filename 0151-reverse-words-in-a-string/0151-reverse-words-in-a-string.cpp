class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string s_new = "";
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] == ' ')) {
                if(s_new.size())
                v.push_back(s_new);
                s_new = "";
            } else
                s_new += s[i];
        }
        if(s_new.size())
        v.push_back(s_new);
        s = "";
        for (int i = v.size() - 1; i >= 0; i--) {
            s += v[i];
            if (i)
                s += " ";
        }
        return s;
    }
};