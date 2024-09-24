class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int high=nums.size()-1;
        int low=0;

        while(low<=high){
            int mid= low +  (high-low)/2;

            if(nums[mid]==target) return true;

            if(nums[low]<=nums[mid]){
                if(nums[mid]<=target && target<nums[mid]) high=mid-1;
                else low=mid+1;
            }
            else{
                if(nums[mid]<target &&  target<=nums[high]) low=mid+1;
                else high=mid-1;
            }
        }
        return false;
    }
};