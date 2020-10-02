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
    private:
    ListNode* HEAD;
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head ->next == NULL){
            return head;
        }
        
        helperSolve(head);
        return HEAD;
    }
    
    ListNode* helperSolve(ListNode* head){
        if(head->next == NULL){
            HEAD = head;
            return head;
        }
        
        ListNode* rest = helperSolve(head->next);
        rest->next = head;
        head->next = NULL;
        return head;
    }
};