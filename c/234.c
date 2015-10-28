/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reverse(struct ListNode **L)
{
    if(*L)
    {
        struct ListNode *p, *pre, *r;
        pre = *L;
        r = (*L)->next;
        (*L)->next = NULL;
        while(r)
        {
            p = r;
            r = r->next;
            p->next = pre;
            pre = p;
        }
        *L = pre;
    }
}
bool isPalindrome(struct ListNode* head) {
    if(head)
    {
        struct ListNode *slow, *fast;
        slow = head;
        fast = head->next;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        struct ListNode *l2 = slow->next;
        slow->next = NULL;
        reverse(&l2);
        while(head && l2)
        {
            if(head->val != l2->val)
                return false;
            head = head->next;
            l2 = l2->next;
        }
        return true;
    }
    return true;
    
}