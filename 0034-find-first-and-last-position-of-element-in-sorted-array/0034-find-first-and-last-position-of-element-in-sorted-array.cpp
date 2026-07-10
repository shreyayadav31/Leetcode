class Solution {
public:

    int firstOccurence(vector<int>& nums, int target){

        int low = 0;
        int high = nums.size()-1;

        int ans = nums.size();

        while(low <= high){

            int mid = low + (high-low)/2;

            if(nums[mid] >= target){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return ans;
    }

    int lastOccurence(vector<int>& nums, int target){

        int low = 0;
        int high = nums.size()-1;

        int ans = nums.size();

        while(low <= high){

            int mid = low + (high-low)/2;

            if(nums[mid] > target){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int start = firstOccurence (nums,target);

        if(start == nums.size() || nums[start] != target)
            return {-1,-1};

        int end = lastOccurence(nums,target);

        return {start,end-1};

    }
};