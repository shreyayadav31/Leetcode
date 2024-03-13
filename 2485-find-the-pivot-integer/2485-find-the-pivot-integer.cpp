class Solution {
public:
    int pivotInteger(int n) {
        int i=2,j=n-1;
        int sum1=1,sum2=n;
        if(n==1)
            return 1;
        if(n==0)
            return -1;
        while(i<=j){
            if(sum1<sum2){
                sum1+=i;
                i++;
            }
            else if(sum1>sum2){
                sum2+=j;
                j--;
            }
            else{
                if (i == j)
                    return i;
                sum1 += i;
                sum2 += j;
                i++;
                j--;
            }
        }
        return -1;
    }
};