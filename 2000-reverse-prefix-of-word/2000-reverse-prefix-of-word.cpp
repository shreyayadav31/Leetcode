class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.length();
        int i=0,j=0;
        while(j<n){
            if(word[j]!=ch){
                j++;   
            }
            else
            {
                break;
            }
        }
        while(i<j && j<n){
            swap(word[i],word[j]);
            i++;
            j--;
        }
        return word;
    }
};