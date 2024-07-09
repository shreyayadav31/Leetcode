class Solution {
public:
    int passThePillow(int n, int time) {
        int completed = time/(n-1);
        int remaining = time %(n-1);
        int ans=0;
        if (completed % 2 != 0) {
            ans= n-remaining;
        } 
        else {
            ans= remaining+1;
        }
        return ans;

        /*
        int i=1;
        while (time>0){
            while(i<n && time>0){
                i++;
                time--;
            }
            while(i>1 && time >0){
                i--;
                time--;
            }
        }
        return i;
        */
    }
};