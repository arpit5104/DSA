class Solution {
public:
    int majorityElement(vector<int>& nums) {
         
         int n = nums.size();
    std::unordered_map<int, int> freq;  // Hash map to store frequencies
    
    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
        
        // As soon as any element appears more than n/2 times, return it
        if (freq[nums[i]] > n / 2) {
            return nums[i];
        }
    }
    
    return -1;
    }
};