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
    ListNode* removeElements(ListNode* head, int k) {
        while(head!=nullptr && head->val==k){
            head = head->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        
        while(curr!=NULL){
           if(curr->val==k){
        prev->next=curr->next;
            curr=curr->next;
           }
            
            else{
                prev=curr;
                curr=curr->next;
            }
            
        }
        return head;
    }
};