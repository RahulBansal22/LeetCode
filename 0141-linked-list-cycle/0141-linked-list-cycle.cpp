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
  bool hasCycle(ListNode *head) {
    if (head == NULL|| head->next==NULL)
        return false;

    int max_iterations = 100000; // set a maximum number of iterations
    int count = 0; // initialize a counter

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != NULL && slow != NULL && count < max_iterations) {
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
        }
        slow = slow->next;
        count++; // increment the counter
        if (slow == fast) {
            return true;
        }
    }

    return false;
}
};