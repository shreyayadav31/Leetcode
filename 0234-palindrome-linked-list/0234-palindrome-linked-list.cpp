/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> res;
        
        while(head!=NULL){
            res.push_back(head->val);
            head=head->next;
        }  
        int j=res.size()-1;  
        int i=0;   
        while( i<j && res[i]==res[j]){
            i++;
            j--;
        }
        if(i>=j)
            return true;
        else 
            return false;
    }
};