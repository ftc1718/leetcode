/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int ListLength(struct ListNode *head)
{
    struct ListNode *p = head;
    int len = 0;
    while(p)
    {
        p = p->next;
        len++;
    }
    return len;
}
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int slen, llen, i;
    int len1, len2;
    struct ListNode *sp, *lp;
    len1 = ListLength(headA);
    len2 = ListLength(headB);
    if(len1 < len2)
    {
        slen = len1;
        sp = headA;
        llen = len2;
        lp = headB;
    }
    else
    {
        slen = len2;
        sp = headB;
        llen = len1;
        lp = headA;
    }
    i = llen - slen;
    while(i--)
        lp = lp->next;
    while(sp && lp)
    {
        if(sp == lp)
            return sp;
        sp = sp->next;
        lp = lp->next;
    }
    return NULL;
}