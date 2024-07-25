class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            // a letter is found so count
            if (s[i] != ' ') {
                count++;
            } else {
                // it's a white space instead
                // Did we already start to count a word?
                // Yes, so we found the last word
                if (count > 0)
                    return count;
            }
        }

        return count;
    }
};
