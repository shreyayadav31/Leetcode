class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(auto x: nums){
            mp[x]++;
        }
        for(int i=1; i<=n+1; i++){
            if(mp[i]==0){  //Checks if i is missing in the map  , mp[i] is value and i is key
                return i;
            }
        }
        return -1;            
    }
};