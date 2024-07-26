class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Sort the array
        sort(strs.begin(), strs.end());

        // Get the first and last strings
        string first = strs[0];
        string last = strs[strs.size() - 1];

        // Compare characters
        int i = 0;
        while (i < first.size() && i < last.size() && first[i] == last[i]) {
            i++;
        }

        return first.substr(0, i);
    }
};
