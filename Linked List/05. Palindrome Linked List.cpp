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
        ListNode *start;
        bool res = true;
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;
        }
        start = head;
        helperSolve(head);
        return res;
    }
    
    void helperSolve(ListNode* head){
        if(head == NULL) return;
        
        helperSolve(head->next);
        if(head->val == start->val){
            res = res & true;
        }else{
            res = false;
        }
        start = start->next;
        
    }
    
};