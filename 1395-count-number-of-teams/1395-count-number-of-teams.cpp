class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        int count=0 ;
        //O(n*(n+n))
        for(int j=1; j<n-1; j++){   //middle element O(n)
            int greaterleft=0, smallerright=0 ; //for strictly decreasing
            int smallerleft=0, greaterright=0; //for strictly increasing 

            for(int i=0; i<j ;i++) {   //left of middle element O(n)
                if(rating[i] > rating[j])
                    greaterleft++;
                else if(rating[i] < rating[j])
                    smallerleft++;
            }
            

            for(int k=j+1; k<n ; k++) {   //right of middle element 0(n)
                if(rating[k] < rating[j])
                    smallerright++;
                else if(rating[k] > rating[j])
                    greaterright++;
            }
            count+= (( greaterleft * smallerright) + (smallerleft * greaterright));

        }
        return count;
        /*Brute force approach
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                for(int k=j+1; k<n; k++){
                    if(rating[i]<rating[j] && rating[j]<rating[k] || rating[i]>rating[j]  && rating[j]>rating[k]){
                        count++;
                    }
                }
            }
        }
        return count;
        */
    }
};