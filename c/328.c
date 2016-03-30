/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {

    if(!head || !head->next) return head;
        struct ListNode *odd, *even;
        struct ListNode *tmphead, *rear;
        odd = head;
        even = head->next;
        tmphead = even;
        while(odd->next && even->next){
            odd->next = even->next;
            odd = odd->next;
                
                
            even->next = odd->next;
            even = even->next;
        }
        odd->next = tmphead;            
        return head;
}