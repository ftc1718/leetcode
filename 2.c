/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *l = l1;
    struct ListNode *s, *tmp, *p, *pre;
    int tag = 0;
    while(l1 && l2)
    {
        
        p = l1;
        p->val = l1->val + l2->val;
        if(tag)
        {
            p->val += 1;
            tag = 0;
        }
        if(p->val >= 10)
        {
            p->val -= 10;
            tag = 1;
        }
        tmp = l2;
        l1 = l1->next;
        l2 = l2->next;
        free(tmp);
    }
    if(l2)
        l1 = l2;
    p->next = l1;
    pre = p;
    while(tag)
    {
        if(l1 == NULL)
        {
            s = (struct ListNode*)malloc(sizeof(struct ListNode));
            s->val = 1;
            s->next = NULL;
            pre->next = s;
            tag = 0;
        }
        else
        {
            l1->val += 1;
            tag = 0;
            if(l1->val >= 10)
            {
                l1->val -= 10;
                pre = l1;
                l1 = l1->next;
                tag = 1;
            }
        }
    }
    return l;
}