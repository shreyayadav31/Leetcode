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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL){
            return head;
        }
        ListNode *dummy=NULL;        //dummy does not point to any node
        ListNode *cur=head;
        ListNode *prev=NULL;         //prev does not point to any node
        int count=0;
        while(count<k && cur!=NULL){
            cur=cur->next;
            count++;
        }
        cur=head;
        if(count==k){
            count=0;
            while(count<k && cur!=NULL){
                dummy=cur->next;
                cur->next=prev;
                prev=cur;
                cur=dummy;
                count++;
            }
        }
        else{
            prev=head;
        }
        if(dummy!=NULL){
            head->next=reverseKGroup(dummy,k);
        }
        return prev;
    }
};