/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     struct RandomListNode *next;
 *     struct RandomListNode *random;
 * };
 */
struct RandomListNode *copyRandomList(struct RandomListNode *head) {
    struct RandomListNode *head_cp = NULL, *cur_cp = NULL, *cur = head;
    if(head == NULL)
        return head;
    while(cur)
    {
        cur_cp = (struct RandomListNode*)malloc(sizeof(struct RandomListNode));
        cur_cp->label = cur->label;
        cur_cp->random = NULL;
        cur_cp->next = cur->next;
        cur->next = cur_cp;
        cur = cur_cp->next;
    }
    cur = head;
    while(cur)
    {
        cur_cp = cur->next;
        if(cur->random)
            cur_cp->random = cur->random->next;
        cur = cur_cp->next;
    }
    cur = head;
    head_cp = head->next;
    while(cur)
    {
        cur_cp = cur->next;
        cur->next = cur_cp->next;
        cur = cur->next;
        if(cur)
            cur_cp->next = cur->next;
    }
    return head_cp;
}
