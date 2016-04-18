class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        vector<int> f(n, 1);
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < i; j++) {
                if(nums[j] < nums[i]) {
                    f[i] = max(f[i], f[j]+1);
                }
            }
        }
        sort(f.begin(), f.end());
        return f[n-1];
    }
};