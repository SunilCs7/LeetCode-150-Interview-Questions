class Solution {
public:
    int hIndex(vector<int>& citations) {
        // Sort the citations array in non-decreasing order
        sort(citations.begin(), citations.end(), greater<int>());
        
        // Initialize the h-index to 0
        int hIndex = 0;
        
        // Iterate through the sorted array
        for (int i = 0; i < citations.size(); ++i) {
            // Check if the current citation count is greater than or equal to the index+1
            if (citations[i] >= i + 1) {
                // Update the h-index
                hIndex = i + 1;
            } else {
                // Break the loop if the condition is not met
                break;
            }
        }
        
        // Return the calculated h-index
        return hIndex;
    }
};