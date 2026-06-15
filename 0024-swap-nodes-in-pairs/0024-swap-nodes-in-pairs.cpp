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
    ListNode* swapPairs(ListNode* head) {
        ListNode* t1=head;
        // ListNode* prev=new ListNode(head->val);
        int prev;
        int count=1;
        while(t1!=NULL ){
           if(count%2==1){
             prev=t1->val;
             if(t1->next)t1->val=t1->next->val;
           }
           else{
              t1->val=prev;
           }
           t1=t1->next;
           count++;
        }
        return head;
    }
};