class Solution {
public:
    int romanToInt(string s) {
        // Mapping of Roman numeral symbols to their values
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int result = 0;
        for (int i = 0; i < s.size(); ++i) {
            // If current symbol is less than the next symbol, subtract its value
            if (i + 1 < s.size() && roman[s[i]] < roman[s[i + 1]]) {
                result -= roman[s[i]];
            } else {
                // Otherwise, add its value
                result += roman[s[i]];
            }
        }

        return result;
    }
};
