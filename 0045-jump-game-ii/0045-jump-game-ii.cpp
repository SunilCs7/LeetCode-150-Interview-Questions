class Solution {
public:
    int jump(vector<int>& nums) {
         int totalJumps = 0;

    // destination is last index
    int destination = nums.size() - 1;

    int coverage = 0, lastJumpIdx = 0;

    // Base case
    if (nums.size() == 1) return 0;

    // Greedy strategy: extend coverage as long as possible
    for (int i = 0; i < nums.size(); i++) {

coverage = max(coverage, i + nums[i]);

      if (i == lastJumpIdx) {
        lastJumpIdx = coverage;
        totalJumps++;

        // check if we reached destination already
        if (coverage >= destination) {
          return totalJumps;
        }
      }
    }

    return totalJumps;
        
    }
};