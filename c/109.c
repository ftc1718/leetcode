/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct ListNode* findMid(struct ListNode* head)
{
    struct ListNode *fast = head;
    struct ListNode *slow = head->next;
    while(slow && slow->next)
    {
        fast = fast->next;
        slow = slow->next->next;
    }
    return fast;
}

struct TreeNode* sortedListToBST(struct ListNode* head) {
    if(head)
    {
        struct ListNode *mid, *pre = NULL;
        struct ListNode *fast = head;
        struct ListNode *slow = head->next;
        while(slow && slow->next)
        {
            pre = fast;
            fast = fast->next;
            slow = slow->next->next;
        }
        mid = fast;
        if(pre)
            pre->next = NULL;
        else
        {
            head = NULL;
        }
        struct TreeNode *T = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        T->val = mid->val;
        T->left = sortedListToBST(head);
        T->right = sortedListToBST(mid->next);
        return T;
    }
    else
        return NULL;
}