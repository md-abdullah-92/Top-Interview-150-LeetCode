class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = nums1.size() - 1;
        int j = nums2.size() - 1;
        while (j >= 0) {
            nums1[i] = nums2[j];
            i--;
            j--;
        }
        sort(nums1.begin(), nums1.end());
    }
};