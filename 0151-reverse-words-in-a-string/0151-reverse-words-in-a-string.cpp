class Solution {
public:
    string reverseWords(string s) {
        // Trim leading and trailing spaces
        int start = 0, end = s.size() - 1;
        while (start <= end && s[start] == ' ') start++;
        while (end >= start && s[end] == ' ') end--;

        string result;
        string word;

        for (int i = start; i <= end; ++i) {
            if (s[i] == ' ') {
                if (!word.empty()) {
                    if (!result.empty()) {
                        result = word + ' ' + result;
                    } else {
                        result = word;
                    }
                    word.clear();
                }
            } else {
                word += s[i];
            }
        }

        // Add the last word
        if (!word.empty()) {
            if (!result.empty()) {
                result = word + ' ' + result;
            } else {
                result = word;
            }
        }

        return result;
    }
};
