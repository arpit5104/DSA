class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                count++;

            }
            else if(s[i]==')'){
                maxi=max(count,maxi);
                count--;
            }
            else{
                continue;
            }
        }
        return maxi;
    }
};