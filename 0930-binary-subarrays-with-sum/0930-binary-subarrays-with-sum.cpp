class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>prefixsum;
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==goal){
                count++;
            }
            int val=sum-goal;
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
       
        // int n = nums.size();
        // int result = 0;
        // int prefixSum = 0;
        // unordered_map<int,int>mp;
        // mp[0] = 1;
        // for(int i=0; i<n; i++){
        //     prefixSum += nums[i];
        //     result += mp[prefixSum - goal];
        //     mp[prefixSum]++;
        // }
        // return result;
        
        
    }
};