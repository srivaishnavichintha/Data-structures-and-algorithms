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
    ListNode* sortList(ListNode* head) {

  for (int steps = 1;; steps *= 2) {
    ListNode* remaining = head;
    ListNode** next_ptr = &head;

    int num_loops = 0;
    for (; remaining; ++num_loops) {
      ListNode* sublists[2];
      ListNode* sublists_tail[2] = {nullptr, nullptr};
      for (int i = 0; i < 2; ++i) {
        sublists[i] = remaining;
        for (int j = 0; remaining && j < steps; ++j) {
          sublists_tail[i] = remaining;
          remaining = remaining->next;
        }
        if (sublists_tail[i]) {
          sublists_tail[i]->next = nullptr;
        }
      }
      while (sublists[0] && sublists[1]) {
        if (sublists[0]->val <= sublists[1]->val) {
          *next_ptr = sublists[0];
          next_ptr = &sublists[0]->next;
          sublists[0] = sublists[0]->next;
        } else {
          *next_ptr = sublists[1];
          next_ptr = &sublists[1]->next;
          sublists[1] = sublists[1]->next;
        }
      }   
      if (sublists[0]) {
        *next_ptr = sublists[0];
        next_ptr = &sublists_tail[0]->next;
      } else {
        *next_ptr = sublists[1];
        next_ptr = &sublists_tail[1]->next;
      }
    }
    if (1 >= num_loops) {
      return head;
    }
  } 
}
};