class Solution {
public:

    // Finds the first index where nums[index] == target
    int firstOccurence(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size() - 1;

        int ans = -1;              // Changed from nums.size()

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                ans = mid;          // Store answer
                end = mid - 1;      // Continue searching on left
            }
            else if (nums[mid] > target) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return ans;
    }

    // Finds the last index where nums[index] == target
    int lastOccurence(vector<int>& nums, int target) {

        int start = 0;
        int end = nums.size() - 1;

        int ans = -1;              // Changed from nums.size()

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                ans = mid;          // Store answer
                start = mid + 1;    // Continue searching on right
            }
            else if (nums[mid] > target) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int start = firstOccurence(nums, target);

        if (start == -1)           // Target not found
            return {-1, -1};

        int end = lastOccurence(nums, target);

        return {start, end};       
    }
};