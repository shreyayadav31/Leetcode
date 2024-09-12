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
    ListNode* deleteMiddle(ListNode* head) {
        int c=0;
        ListNode *ptr1=head;
        ListNode *ptr2=head;
        ListNode *prev=nullptr;
        
        if (!head || !head->next) {
            
            return nullptr;
        }
        
        while(ptr1!=nullptr){
            ptr1=ptr1->next;
            c++;
        }
        int mid=c/2;
        while(mid!=0){
            prev=ptr2;
            ptr2=ptr2->next;
            mid--;
        }
        prev->next=ptr2->next;
        return head;
    }
    
};