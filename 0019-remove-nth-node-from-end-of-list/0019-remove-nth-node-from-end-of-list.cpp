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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
        ListNode *dummy =new ListNode(0); //a dummy node is created and initialize it with 0
        dummy->next=head;

        ListNode *ptr1=dummy;  //both pointer points dummy node
        ListNode *ptr2=dummy;
       
        for(int i=0;i<n;i++){ 
            ptr2=ptr2->next;     //move ptr2 n spaces ahead
        }
        while(ptr2->next!=NULL){   // move both the pointer till ptr2_next points to NULL
            ptr1=ptr1->next;
            ptr2=ptr2->next;   
        }
        ptr1->next=ptr1->next->next;  // delete next of ptr1
        
        
        return dummy->next;
    }
};