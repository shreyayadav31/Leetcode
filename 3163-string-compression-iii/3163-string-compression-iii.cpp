class Solution {
public:
    string compressedString(string word) {
        int n = word.length();
        string comp = "";
        int i=0;
        //T.C = O(n)
        while(i<n){
            int count =0;
            char ch = word[i];
            while(word[i]==ch && count<9){
                count++;
                i++;
            }
            comp += to_string(count) + ch;
        }
        return comp;
    }
};