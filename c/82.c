/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *p = head;
    struct ListNode *r = NULL;
    if(!p || !p->next)
        return head;
    while(p && p->next)
    {
        if(p->val != p->next->val)
        {
            if(r == NULL)
                r = head = p;
            else
            {
                r->next = p;
                r = p;
            }
        }
        while(p->next && p->val == p->next->val)
            p = p->next;
        p = p->next;
    }
    if(r == NULL)
        head = p;
    else
    {
        r->next = p;
    }
    return head;
}