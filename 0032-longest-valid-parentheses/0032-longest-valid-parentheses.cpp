class Solution {
public:
    int longestValidParentheses(string s) {
        stack<char> stk;
        int longest = 0;
        int currLong = 0;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stk.push(c);
            }
            else {
                if (stk.empty()) {
                    longest = max(longest, currLong);
                    currLong = 0;
                    continue;
                }

                char top = stk.top();
                stk.pop();

                if (c == ')' && top != '(' || 
                    c == ']' && top != '[' ||
                    c == '}' && top != '{'
                ) {
                    while (!stk.empty()) stk.pop();
                    longest = max(longest, currLong);
                    currLong = 0;
                    continue;
                }

                currLong += 2;
            }
        }

        longest = max(longest, currLong);

        return longest;
    }
};