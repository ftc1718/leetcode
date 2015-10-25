/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* insertionSortList(struct ListNode* head) {
    if(head)
    {
        struct ListNode *pos, *cur, *p, *r;
        p = head->next;
        head->next = NULL;
        
        while(p)
        {
            pos = head;
            r = p->next;
            while(pos && pos->val < p->val)
            {
                cur = pos;
                pos = pos->next;
            }
            if(pos == head)
            {
                p->next = pos;
                head = p;
            }
            else
            {
                cur->next = p;
                p->next = pos;
            }
            p = r;
        }
        
    }
    return head;
}