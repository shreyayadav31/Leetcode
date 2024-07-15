class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char> st;
        string str;
        int ans = 0;  
        
        if (x < y) {    // remove 'ba' first
            for (int i = 0; i < s.length(); i++) {
                if (!st.empty() && st.top() == 'b' && s[i] == 'a') {
                    ans += y;
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            }

            // Get remaining string from stack into a new string
            while (!st.empty()) {
                str.push_back(st.top());
                st.pop();
            }
            reverse(str.begin(), str.end()); // Reverse to maintain original order

            for (int i = 0; i < str.length(); i++) {
                if (!st.empty() && st.top() == 'a' && str[i] == 'b') {
                    ans += x;
                    st.pop();
                } else {
                    st.push(str[i]);
                }
            }
        } 
        
        else {    // remove 'ab' first
            for (int i = 0; i < s.length(); i++) {
                if (!st.empty() && st.top() == 'a' && s[i] == 'b') {
                    ans += x;
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            }

            // Get remaining string from stack
            while (!st.empty()) {
                str.push_back(st.top());
                st.pop();
            }
            reverse(str.begin(), str.end()); // Reverse to maintain original order

            for (int i = 0; i < str.length(); i++) {
                if (!st.empty() && st.top() == 'b' && str[i] == 'a') {
                    ans += y;
                    st.pop();
                } else {
                    st.push(str[i]);
                }
            }
        }
        return ans;
    }
};