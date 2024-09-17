class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=n;
        int high=n-1;
        int low=0;
        
        //finding the ceil
        
        while(low<=high){
            long long mid= low+ high-low/2;
            if(nums[mid] >= target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};