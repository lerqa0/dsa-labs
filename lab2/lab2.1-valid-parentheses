//valid parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char> items;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                items.push(s[i]);
            } 
            else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
                if (items.empty()) {
                    return false;
                }

                if (s[i] == ')' && items.top() == '(') {
                    items.pop();
                }
                else if (s[i] == ']' && items.top() == '[') {
                    items.pop();
                }
                else if (s[i] == '}' && items.top() == '{') {
                    items.pop();
                }
                else {
                    return false;
                }
            }
        }
        return items.empty();
    }
};
