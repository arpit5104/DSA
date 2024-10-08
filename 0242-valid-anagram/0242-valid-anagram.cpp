class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            m[t[i]]--;
        }
        for(auto ele:m){
            if(ele.second!=0){
                return false;
            }
        }
        return true;
    }
};