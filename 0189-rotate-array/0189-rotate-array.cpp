
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v(n);
        v = nums;
        k=k%n;
        int j = 0;
        for (int i = n - k; i < n; i++) { 
            nums[j++] = v[i];
        }
        for (int i = 0; i < n - k; i++) { 
            nums[j++] = v[i];
        }
    }
};
