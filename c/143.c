/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void dividList(struct ListNode **L, struct ListNode **L1)
{
    if(*L)
    {
        struct ListNode *slow, *fast;
        slow = (*L);
        fast = (*L)->next;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        *L1 = slow->next;
        slow->next = NULL;
    }
}
void reverse(struct ListNode **L)
{
    if(*L)
    {
        struct ListNode *p, *r, *pre;
        pre = *L;
        p = (*L)->next;
        (*L)->next = NULL;
        while(p)
        {
            r = p->next;
            p->next = pre;
            pre = p;
            p = r;
        }
        (*L) = pre;
    }
}
void merge(struct ListNode **l1, struct ListNode **l2)
{
    if(*l1)
    {
        struct ListNode *p1, *p2, *p;
        struct ListNode *r1, *r2;
        int flag = 1;
        p = *l1;
        p1 = (*l1)->next;
        p2 = (*l2);
        (*l1)->next = NULL;
        while(p1 && p2)
        {
            if(flag)
            {
                p->next = p2;
                p2 = p2->next;
                p = p->next;
                flag = 0;
            }
            else
            {
                p->next = p1;
                p1 = p1->next;
                p = p->next;
                flag = 1;
            }
        }
        if(p2)
            p1 = p2;
        p->next = p1;
    }
}
void reorderList(struct ListNode* head) {
    struct ListNode *l1 = NULL;
    dividList(&head, &l1);
    reverse(&l1);
    merge(&head, &l1);
}