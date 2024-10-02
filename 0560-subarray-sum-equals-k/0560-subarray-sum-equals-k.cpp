class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       map<int,int> prefix;
        int sum=0;
        int count=0;
       for(int  i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k) count++;
            int rem=sum-k;
            if(prefix.find(rem)!=prefix.end())  count++;
            if(prefix.find(sum)==prefix.end())   prefix[sum]=i;;

       }
       return   count;
    }
};