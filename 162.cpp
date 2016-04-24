class Solution {
public:
    int findPeakElement(vector<int>& nums) {
         int l = 0, h = nums.size()-1;
         while(l < h-1) {
             int mid = (l+h)/2;
             if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) return mid;
             if(nums[mid] < nums[mid-1]) h = mid-1;
             else l = mid+1;
         }
         return nums[l] < nums[h] ? h : l;
    }
};