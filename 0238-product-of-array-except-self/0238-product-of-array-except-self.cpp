class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        std::vector<int> left(n, 1);
        std::vector<int> right(n, 1);
        
        
        for (int i = 1; i < n; ++i) {
            left[i] = left[i - 1] * nums[i - 1];   //store left multiples of every element
        }
        
        for (int i = n - 2; i >= 0; --i) {
            right[i] = right[i + 1] * nums[i + 1];   //store right multiples of every element
        }
        std::vector<int> answer(n);
        
        
        for (int i = 0; i < n; ++i) {
            answer[i] = left[i] * right[i];   //multiply left and right multiple of every elememt
        }
        
        return answer;
        
    }
};