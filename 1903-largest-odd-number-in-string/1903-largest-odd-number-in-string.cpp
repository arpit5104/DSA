class Solution {
public:
   string largestOddNumber(string num) {
        string ans = "";
        int n = num.size();
        
        
        for(int i = n - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 == 1) { // Check if the character represents an odd number
                ans = num.substr(0, i + 1); // Take the substring from the start to i (inclusive)
                break;
            }
        }
        
        return ans;
    }
};