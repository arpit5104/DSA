class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int high=nums.size()-1;
        int low=0;
        if(nums.size()==1) return nums[0];
       
        while(low<=high){
           int  mid=low+(high-low)/2;
           if(mid%2!=0  ){
            if(nums[mid-1]==nums[mid])  low=mid+1;
            else high=mid-1;
            
           }
           else if(nums[mid+1]!=nums[mid]  &&  nums[mid-1]!=nums[mid]) return nums[mid];
            else{
                if(nums[mid+1]==nums[mid])low=mid+1;
                else high=mid-1;
            }
        }
        return  0;
    }
};