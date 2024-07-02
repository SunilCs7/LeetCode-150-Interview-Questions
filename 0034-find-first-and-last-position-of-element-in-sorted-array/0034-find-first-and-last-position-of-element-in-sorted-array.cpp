class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1, end = -1;
        
        // Find the starting position
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
            if (nums[mid] == target) {
                start = mid;
            }
        }
        
        // Find the ending position
        left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
            if (nums[mid] == target) {
                end = mid;
            }
        }
        
        if (start == -1 || end == -1) {
            return {-1, -1};
        }
        return {start, end};
    }
};
