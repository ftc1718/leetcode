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
    ListNode* reverseList(ListNode* head) {
        
        ListNode *pre, *cur;
        pre = NULL;
        cur = head;


        while(cur){       
            ListNode *rear = cur->next;
            cur->next = pre;
            pre = cur;
            cur = rear;
        }
        
        return pre;
    }
};