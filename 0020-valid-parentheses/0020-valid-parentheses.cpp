#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            // If it's an opening bracket, push onto stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            // If it's a closing bracket
            else {
                if (st.empty()) return false; // No matching opening bracket
                char top = st.top();
                st.pop();
                // Check if the top of the stack matches the closing bracket
                if ((c == ')' && top != '(') || 
                    (c == '}' && top != '{') || 
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // Stack should be empty if all brackets were matched
        return st.empty();
    }
};
