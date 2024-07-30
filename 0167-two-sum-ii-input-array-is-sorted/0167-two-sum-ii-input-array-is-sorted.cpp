class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return {left + 1, right + 1}; // returning 1-based indices
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        return {}; // In case no solution is found, though the problem guarantees one
    }
};
