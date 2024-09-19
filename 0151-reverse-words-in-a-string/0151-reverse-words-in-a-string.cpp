class Solution {
public:
    string reverseWords(string s) {
        s += " ";
        vector<string> str;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(temp!="")
                str.push_back(temp);
                temp="";
            }
            else{
                temp +=s[i];
            }
        }
        int n=str.size();
        string ans="";
        for(int i=n-1;i>0;i--){
            ans += str[i]+" ";
        }
        ans += str[0];
        return ans;
    }
};