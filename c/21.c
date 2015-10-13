/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *p1, *p2, *p, *l;
    if(!l1 || !l2){
        if(l2)
            l1 = l2;
        return l1;
    }
    if(l1->val < l2->val){
        l = l1;
        p1 = l1->next;
        p2 = l2;
    }
    else{
        l = l2;
        p1 = l1;
        p2 = l2->next;
    }
    p = l;
    while(p1 && p2){
        if(p1->val < p2->val){
            p->next = p1;
            p = p1;
            p1 = p1->next;
        }
        else{
            p->next = p2;
            p = p2;
            p2 = p2->next;
        }
    }
    if(p2)
        p1 = p2;
    while(p1){
        p->next = p1;
        p = p1;
        p1 = p1->next;
    }
    p->next = NULL;
    return l;
}