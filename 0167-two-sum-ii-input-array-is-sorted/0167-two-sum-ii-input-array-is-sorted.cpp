class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return {left + 1, right + 1}; // Return 1-indexed positions
            } else if (sum < target) {
                left++; // Move the left pointer to the right to increase the sum
            } else {
                right--; // Move the right pointer to the left to decrease the sum
            }
        }

        return {}; // This line should never be reached because the problem guarantees a solution
    }
};
