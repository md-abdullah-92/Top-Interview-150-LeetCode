class Solution {
public:
    int candy(vector<int>& v) {
        vector<int> l(v.size(), 0);
        vector<int> r(v.size(), 0);
        int sum = 0, k = 1;
        l[0] = 1;
        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i + 1] > v[i]) {
                l[i + 1] = ++k;
            } else {
                k = 1;
                l[i + 1] = k;
            }
        }
        k = 1;
        r[v.size() - 1] = 1;
        for (int i = v.size() - 2; i >= 0; i--) {
            if (v[i + 1] < v[i]) {
                r[i] = ++k;
            } else {
                k = 1;
                r[i] = k;
            }
        }
        for (int i = 0; i < v.size(); i++)
            sum += max(r[i], l[i]);

        return sum;
    }
};
