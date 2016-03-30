/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode* oddEvenList(ListNode* head)
    {
        if(!head)
            return head;
        ListNode *odd, *even;
        ListNode *tmphead, *rear;
        odd = head;
        even = head->next;
        tmphead = even;
        while(odd && even)
        {
            odd->next = even->next;
            rear = odd;
            odd = even->next;


            if(odd == NULL)  break;

            even->next = odd->next;
            even = odd->next;
        }

        if(odd == NULL) rear->next = tmphead;
        else odd->next = tmphead;
        return head;
    }
};
