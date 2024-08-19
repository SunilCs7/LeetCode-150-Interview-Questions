class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> charCount;
        
        // Count the frequency of each character in the magazine
        for (char c : magazine) {
            charCount[c]++;
        }
        
        // Check if we have enough characters to construct the ransomNote
        for (char c : ransomNote) {
            if (charCount[c] > 0) {
                charCount[c]--;
            } else {
                return false; // Not enough characters in magazine
            }
        }
        
        return true; // All characters are available in sufficient quantity
    }
};