class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
       sort(strs.begin(),strs.end());
       int i=0;
       int j=0;
       string result="";
       string first=strs[0];
       if(first.size()==0) return result;
       string last=strs[strs.size()-1];
       if(last.size()==0) return result;
       while(i<first.size() && j<last.size()){
        if(first[i]==last[i]){
            result +=first[i];
            i++;
            j++;
        }
        else{
            break;
        }
       }
       return result;
        
    }
};