class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) return mid;  // Found the target

            // Check if the left half is sorted
            if (arr[low] <= arr[mid]) {
                // Check if target lies within the sorted left half
                if (arr[low] <= target && target < arr[mid]) {
                    high = mid - 1;  // Search in the left half
                } else {
                    low = mid + 1;   // Search in the right half
                }
            }
            // Otherwise, the right half must be sorted
            else {
                // Check if target lies within the sorted right half
                if (arr[mid] < target && target <= arr[high]) {
                    low = mid + 1;   // Search in the right half
                } else {
                    high = mid - 1;  // Search in the left half
                }
            }
        }

        return -1;  // Target not found
    }
};
