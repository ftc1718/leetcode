/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if(!head)
        return NULL;
    struct ListNode *pre, *p = head;
    struct ListNode *q = p->next;
    while(q)
    {
        if(p == head)
        {
            p->next = q->next;
            q->next = p;
            head = q;
        }
        else
        {
            pre->next = q;
            p->next = q->next;
            q->next = p;
        }
        pre = p;
        p = pre->next;
        if(p)
            q = p->next;
        else
            q = NULL;
    }
    return head;
}