class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;               // Left pointer
        int j = height.size() - 1; // Right pointer
        int maxWater = 0;        // Variable to store the maximum water

        while (i < j) {
            int w = j - i;                  // Width between the two lines
            int h = min(height[i], height[j]); // Height of the container
            int area = w * h;               // Calculate the area
            maxWater = max(maxWater, area); // Update the maximum water

            // Move the pointer pointing to the shorter line
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }

        return maxWater; // Return the maximum water found
    }
};
