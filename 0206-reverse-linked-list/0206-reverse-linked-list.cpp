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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL;
        ListNode *curr=head;  //curr=1
        ListNode *temp;
        while(curr!=NULL){
            temp=curr->next;  //temp=2
            curr->next=prev;   //2->1
            prev=curr;         //prev=1
            curr=temp;         //curr=2
        }
        return prev;

     //old version   
    }
};