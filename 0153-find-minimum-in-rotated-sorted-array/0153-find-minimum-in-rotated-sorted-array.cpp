class Solution {
public:
    int findMin(vector<int>& nums) {
        int high=nums.size()-1;
        int low=0;
        int mini=nums[low];
        if(nums[low]<=nums[high]) return mini;

        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(nums[low]<=nums[mid]){
               if(mini>=nums[low]) mini=nums[low];
                low=mid+1;
            } 
            else{
                if(mini>=nums[mid]) mini=nums[mid];
                high=mid-1;
            }    
    }
    return mini;
    }
};