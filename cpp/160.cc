/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *l = headA, *s = headB;
        int llen, slen;
        llen = slen = 0;
        while(l){
            ++llen;
            l = l->next;
        }
        while(s){
            ++slen;
            s = s->next;
        }
        l = headA; s = headB;
        if(llen < slen){
            int tmp = llen;
            llen = slen;
            slen = tmp;
            l = headB; s = headA;
        }
        
        int dis = llen - slen;
        while(dis--){
            l = l->next;
        }
        
        while(l && s){
            if(l == s) return l;
            l = l->next;
            s = s->next;
        }
        
        return NULL;
    }
};