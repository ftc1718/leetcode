/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode *p = head;
    struct ListNode *pre = NULL;
    int len = 0;
    while(p)
    {
        pre = p;
        p = p->next;
        ++len;
    }
    if(pre)
        pre->next = head;
    else
        return head;
    p = head;
    int cnt = len - (k % len);
    while(cnt--)
    {
        pre = p;
        p = p->next;
    }
    head = p;
    pre->next = NULL;
    return head;
}