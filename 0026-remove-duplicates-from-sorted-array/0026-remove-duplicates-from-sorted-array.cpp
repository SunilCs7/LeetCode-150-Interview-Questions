class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         if (nums.empty()) return 0;  // Handle edge case for empty array

        int n = nums.size();
        int i = 0;
        for (int j = 1; j < n; j++) {
            if (nums[i] != nums[j]) {
                nums[i + 1] = nums[j];
                i++;
            }
        }
        return i + 1;
    }
};