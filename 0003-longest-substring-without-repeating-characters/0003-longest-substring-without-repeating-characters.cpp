class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count[256]={0};
        int l=0,r=0,maxlen=0;
        int n=s.length();
        while(r<n){
            count[s[r]]++;   //number of time a character appears
            while(count[s[r]]>1){
                count[s[l]]--;
                l++;
            }
            maxlen= max(maxlen,r-l+1);// maximum length
            r++;
        }
        return maxlen;
    }
};