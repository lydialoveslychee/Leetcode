class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int> first2(2, INT_MAX);
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] > first2[1]) return true;
            if(nums[i] > first2[0]) first2[1] = min(first2[1], nums[i]);
            else first2[0] = nums[i];
        }
        return false; 
    }
};