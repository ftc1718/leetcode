/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
    if(m == n)
        return head;
    struct ListNode *begin, *end;
    struct ListNode *pre = NULL;
    int t = n - m;
    begin = head;
    while(--m)
    {
        pre = begin;
        begin = begin->next;
    }
    end = begin;
    while(t--)
        end = end->next;
    if(pre == NULL)
    {
        struct ListNode *p = begin->next;
        struct ListNode *tmp = end->next;
        begin->next = tmp;
        while(p != tmp)
        {
            struct ListNode *r = p->next;
            p->next = begin;
            begin = p;
            p = r;
        }
        head = begin;
    }
    else
    {
        struct ListNode *tmp = end->next;
        pre->next = tmp;
        while(begin != tmp)
        {
            struct ListNode *r = begin->next;
            begin->next = pre->next;
            pre->next = begin;
            begin = r;
        }
    }
    return head;
}