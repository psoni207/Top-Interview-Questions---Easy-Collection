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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    
        ListNode *curr = head;
        ListNode *ahead = head;
        
        int count = 0;
        while(count < n){
            count += 1;
            ahead = ahead->next;
        }
        
        if(ahead == NULL){
            head = head->next;
            return head;
        }
        
        while(ahead->next != NULL){
            curr = curr->next;
            ahead = ahead->next;
        }
            
        curr->next = curr->next->next;
        return head;
    }
};