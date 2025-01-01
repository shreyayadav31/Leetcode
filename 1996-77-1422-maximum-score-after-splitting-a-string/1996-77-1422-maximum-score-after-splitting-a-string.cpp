class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        int zero=0,one=0;
        int tzero=count(s.begin(),s.end(),'0');
        int tone=n-tzero;
        int maxScore=0,score=0,i=0;
        for (int i = 0; i < n - 1; i++) {
            if(s[i]=='0')
                zero++;
            else
                one++;
            score=zero+(tone-one);
            maxScore = max(maxScore, score);
        }
        return maxScore;
    }
};