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
    ListNode* mergeNodes(ListNode* head) {
        ListNode dummy(0);
        ListNode *res= &dummy;
        ListNode *cur=head->next;
        int sum=0;
        while(cur!=nullptr){
            while(cur->val!=0){
                sum=sum+cur->val;
                cur=cur->next;
            }
            res->next=new ListNode(sum);   //inset sum to new node
            res=res->next;
            sum=0;
            cur=cur->next;     //access next member through pointer(cur is pointer)
        }
        return dummy.next;   //next of dummy is head & it access next member directly(dummy is instance)
    }
};