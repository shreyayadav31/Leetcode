class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>prefixsum;
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k){
                count++;
            }
            int val=sum-k;
            if(prefixsum.find(val)!=prefixsum.end()){
                count=prefixsum[val]+count;
            }
            if(prefixsum.find(sum)!=prefixsum.end()){
                prefixsum[sum]++;
            }
            else{
                prefixsum[sum]=1;
            }
        }
        return count;
    }
};