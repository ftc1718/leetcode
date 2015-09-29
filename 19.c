/**
 * Definition for singly-linked list.
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *pre, *cur, *rear;
    pre = cur = rear = head;
    while(n--)
        rear = rear->next;
    while(rear)
    {
        if(pre != cur)
            pre = pre->next;
        cur = cur->next;
        rear = rear->next;
    }
    if(cur == head)
        head = cur->next;
    else
        pre->next = cur->next;
    free(cur);
    return head;
}