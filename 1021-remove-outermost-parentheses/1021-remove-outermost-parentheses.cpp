class Solution {
public:
    string removeOuterParentheses(string s) {
    int count = 0;  // Track the depth of the parentheses
    string result = "";
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            // Only add to result if it's not the outermost '('
            if (count > 0) {
                result.push_back(s[i]);
            }
            count++;
        } else if (s[i] == ')') {
            count--;
            // Only add to result if it's not the outermost ')'
            if (count > 0) {
                result.push_back(s[i]);
            }
        }
    }
    
    return result;
}

};