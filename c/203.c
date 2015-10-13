/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *pre, *p;
    pre = p = head;
    while(p)
    {
        if(p->val == val)
        {
            if(p == head)
            {
                head = head->next;
                free(p);
                p = pre = head;
            }
            else
            {
                pre->next = p->next;
                free(p);
                p = pre->next;
            }
        }
        else
        {
            pre = p;
            p = p->next;
        }
    }
    return head;
}