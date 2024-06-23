class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        // Shift both left and right until they are equal
        int shift = 0;
        while (left < right) {
            left >>= 1;
            right >>= 1;
            shift++;
        }
        // Shift the result back to the left
        return left << shift;
    }
};
