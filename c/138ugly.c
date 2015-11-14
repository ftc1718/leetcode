/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     struct RandomListNode *next;
 *     struct RandomListNode *random;
 * };
 */
struct RandomListNode *copyRandomList(struct RandomListNode *head) {
    struct RandomListNode *newhead = NULL;
    struct RandomListNode *cur = NULL;
    struct RandomListNode *p  = head;
    while(p)
    {
        struct RandomListNode *s = (struct RandomListNode*)malloc(sizeof(struct RandomListNode));
        s->label = p->label;
        s->next = NULL;
        s->random = NULL;
        if(newhead == NULL)
        {
            cur = s;
            newhead = s;
        }
        else
        {
            cur->next = s;
            cur = cur->next;
        }
        p = p->next;
    }
    p = head;
    cur = newhead;
    while(p)
    {
        if(p->random == NULL)
            cur->random = NULL;
        else
        {
            struct RandomListNode *wp = head;
            int len = 0;
            while(wp != p->random)
            {
                len++;
                wp = wp->next;
            }
            wp = newhead;
            while(len--)
            {
                wp = wp->next;
            }
            cur->random = wp;
        }
        p = p->next;
        cur = cur->next;
    }
    return newhead;
}