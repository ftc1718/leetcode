/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *p, *q;
    if(!head)
        return false;
    p = head; q = head->next;
    while(q){
        if(p == q)
            return true;
        p = p->next;
        if(q->next)
            q = q->next->next;
        else
            return false;
    }
    return false;
}