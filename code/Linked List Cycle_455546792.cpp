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
    bool hasCycle(ListNode *head) {
        ListNode *ps = head;
        ListNode *pf = head;
        if(head == NULL || head->next == NULL)
            return false;
        while(pf != NULL && pf->next != NULL)
        {
            ps = ps->next;
            pf = pf->next->next;
            if(ps == pf)
                return true;
        }
        return false;
    }
};
