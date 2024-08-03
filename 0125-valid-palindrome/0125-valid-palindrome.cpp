class Solution {
public:
    bool isPalindrome(string s) {
        // Step 1: Transform the string to only lowercase alphanumeric characters
        string filtered;
        for (char c : s) {
            if (isalnum(c)) {
                filtered += tolower(c);
            }
        }

        // Step 2: Check if the filtered string is a palindrome
        int left = 0;
        int right = filtered.size() - 1;
        
        while (left < right) {
            if (filtered[left] != filtered[right]) {
                return false;
            }
            left++;
            right--;
        }
        
        return true;
    }
};
