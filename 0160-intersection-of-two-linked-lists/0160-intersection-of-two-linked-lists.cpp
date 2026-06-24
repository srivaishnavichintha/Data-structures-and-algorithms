/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        int n1=0,n2=0;
        while(temp!=NULL){
            n1++;
            temp=temp->next;
        }
        temp=headB;
        while(temp!=NULL){
            n2++;
            temp=temp->next;
        }
        temp=headA;
        ListNode* temp2=headB;
        if(n2>n1){
            int t=(n2-n1);
            while(t!=0){
                 temp2=temp2->next;
                 t--;
            }
        }
        else if(n1>n2){
            int t=(n1-n2);
            while(t!=0){
                 temp=temp->next;
                 t--;
            }
        }
        while(temp!=NULL && temp2!=NULL){
            if(temp==temp2) return temp;
            temp=temp->next;
            temp2=temp2->next;
        }
        return NULL;
    }
};