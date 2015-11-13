/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x)
{
    struct ListNode *pre = NULL;
    struct ListNode *p = head;
    while(p && p->val < x)
    {
        pre = p;
        p = p->next;
    }
    if(p == NULL)
        return head;

    else
    {
        struct ListNode *cur = p;
        struct ListNode *curpre = pre;
        while(cur)
        {
            while(cur && cur->val >= x)
            {
                curpre = cur;
                cur = cur->next;
            }
            if(cur)
            {
                curpre->next = cur->next;
                cur->next = p;
                if(pre)
                {
                    pre->next = cur;
                    pre = pre->next;
                }
                else
                {
                    pre = cur;
                    head = cur;
                }
                cur = curpre->next;
            }
        }
    }
    return head;
}
