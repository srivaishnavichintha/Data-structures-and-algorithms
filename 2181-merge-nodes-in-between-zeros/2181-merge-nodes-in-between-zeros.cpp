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
        ListNode* temp=head;
        ListNode* zero=head;
        int sum=0;
        while(temp!=NULL){
            if(temp->val==0 && temp!=head){
                zero->val=sum;
                zero=zero->next;
                sum=0;
            }
            else sum+=temp->val;
            temp=temp->next;
        }
        zero->next=NULL;
        temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
    }
};