class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = target;
        map<int,int> mp;
        int i = 1;
        int p=n/2,xk=0;
        for (int k : numbers) {
            if(mp[k]&&k==p)  xk=mp[k];
            mp[k]=i;
            i++;
        }
        int x = 0, y = 0;
        i = 0;
        for (int k : numbers) {
            if (mp[n - k]&&k==p&&n%2==0) {
                x =mp[n - k];
                y=xk;
            }
            else if (mp[n - k]) {
                x = i + 1;
                y = mp[n - k];
            }
            i++;
        }
        return {y, x};
    }
};