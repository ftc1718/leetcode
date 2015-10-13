/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow, *fast;
    if(head == NULL)
        return NULL;
    slow = fast = head;
    while(fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow || fast == NULL)
            break;
    }
    if(fast == NULL || fast->next == NULL)
        return NULL;
//have found the meeting point
    slow = head;
    while(slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}/// [1,2]
