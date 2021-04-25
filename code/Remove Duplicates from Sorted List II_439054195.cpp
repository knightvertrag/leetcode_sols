/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head == NULL)
            return head;
        unordered_set<int> s;
        ListNode *prev = head, *curr = head, *next = head->next;
        while(curr->next != NULL)
        {
            if(curr->val == next->val)
                s.insert(curr->val);
            curr = curr->next;
            next = curr->next;
        }
        prev = head;
        curr = head;
        next = head->next;
        while(curr != NULL)
        {
            if(s.find(curr->val) != s.end())
            {
                if(curr == head)
                {
                    head = curr->next;
                    curr = curr->next;
                    //next = curr->next;
                    continue;
                }
                prev->next = curr->next;
                curr = curr->next;
            }
            else
            {
                prev = curr;
                curr = curr->next;
                //next = curr->next;
            }
        }
        return head;
    }
};
