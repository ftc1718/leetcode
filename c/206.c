/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *p, *q, *r;
    p = head;
    q = NULL;
    if(head)
        q = p->next;
    while(q){ 
        if(p == head) p->next = NULL;
        r = q->next;
       
        q->next = p;
        p = q;
        q = r;
    }
    return p;
}