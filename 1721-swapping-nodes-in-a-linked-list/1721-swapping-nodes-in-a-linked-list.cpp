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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode *dummy = new ListNode(0);
        dummy->next=head;
        int temp;
        ListNode *ptr1=dummy;
        ListNode *ptr2=dummy;
        for(int i=0;i<k;i++){
            ptr2=ptr2->next;
        }
        ListNode *curr=ptr2;
        while(ptr2!=NULL){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        temp=curr->val;
        curr->val=ptr1->val;
        ptr1->val=temp;
        return head;  //return dummy->next;
    }
};