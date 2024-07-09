class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> friends;
        for (int i=1; i<=n; ++i) {
            friends.push_back(i);
        }
        int start= 0; 
        while (friends.size() > 1) {
            start = (start + k - 1) % friends.size(); // find the kth friend to eliminate
            friends.erase(friends.begin() + start); // remove that friend
        }
        return friends[0];            
    }
};