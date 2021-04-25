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
    ListNode* ans;
    ListNode* helper(ListNode* node)
    {
        if(node == NULL)
            return NULL;
        if(node->next == NULL)
        {
            ans = node;
            return node;
        }   
        ListNode* node1 = helper(node->next);
        node1->next = node;
        node->next = NULL;
        return node;
    }
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* node = helper(head);
        return ans;
        
    }
};
