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
        if(head == NULL || head->next == NULL)
            return NULL;
        ListNode* t1=head;
        int count=0;
        while(t1!=NULL){
           count++;
           t1=t1->next;
        }
        ListNode* t2=head;
        int n=count/2;
        int c=0;
        while(t2!=NULL){
            if(c==n-1){
                t2->next=t2->next->next;
                return head;
            }
            c++;
            t2=t2->next;
        }
        return head;
    }
};