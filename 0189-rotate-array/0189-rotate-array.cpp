class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // In case k is larger than the size of the array
        
        if (k == 0) return;  // No need to rotate if k is 0 or equal to the size of the array
        
        // Step 1: Reverse the entire array
        std::reverse(nums.begin(), nums.end());
        
        // Step 2: Reverse the first k elements
        std::reverse(nums.begin(), nums.begin() + k);
        
        // Step 3: Reverse the remaining n-k elements
        std::reverse(nums.begin() + k, nums.end());
    }
};
