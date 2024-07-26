class Solution {
public:
    string reverseWords(string s) {
        // Remove leading and trailing spaces
        int start = 0;
        while (start < s.size() && s[start] == ' ') start++;
        int end = s.size() - 1;
        while (end >= 0 && s[end] == ' ') end--;

        vector<string> words;
        string word;
        for (int i = start; i <= end; ++i) {
            if (s[i] == ' ') {
                if (!word.empty()) {
                    words.push_back(word);
                    word.clear();
                }
            } else {
                word += s[i];
            }
        }
        if (!word.empty()) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

        string result;
        for (int i = 0; i < words.size(); ++i) {
            result += words[i];
            if (i != words.size() - 1) {
                result += ' ';
            }
        }

        return result;
    }
};
