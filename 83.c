/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *p, *q;
    if(!head)
        return head;
    p = head;
    q = p->next;
    while(q){
        while(q && p->val == q->val)
            q = q->next;
        p->next = q;
        p = q;
        if(!q) break;
        q = q->next;
    }
    return head;
}