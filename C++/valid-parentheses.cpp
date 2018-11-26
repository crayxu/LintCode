class Solution {
public:
    /**
     * @param s: A string
     * @return: whether the string is a valid parentheses
     */
    bool isValidParentheses(string &s) {
        stack<char> stack;
        
        int len = s.length();
        int index = 0;
        
        while (index < len) {
            if (s[index] == '(' || s[index] == '[' || s[index] == '{') {
                stack.push(s[index]);
            } else {
                 if (stack.empty()) {
                    return false;
                }
                char top = stack.top();
                if ((top == '(' && s[index] == ')') ||
                    (top == '[' && s[index] == ']') ||
                    (top == '{' && s[index] == '}')) {
                    stack.pop();
                } else {
                    return false;
                }
            }
            index++;
        }
        if (!stack.empty()) {
            return false;
        }
        return true;
    }
};
