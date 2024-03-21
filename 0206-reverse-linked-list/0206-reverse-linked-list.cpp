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
ListNode* reverseList(ListNode* head) {
    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* forward = NULL;

    while (curr != NULL) {
        forward = curr->next;  // save the next node in the original list
        curr->next = prev;     // reverse the link to the previous node
        prev = curr;           // move prev to current node
        curr = forward;        // move current node to the next node in the original list
    }

    // At this point, prev points to the head of the reversed list
    return prev;
}

};