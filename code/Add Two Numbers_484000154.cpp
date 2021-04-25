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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        auto res = new ListNode;
        auto curr = res;
        while (l1 != NULL && l2 != NULL)
        {
            auto node = new ListNode;
            curr->val = (carry + l1->val + l2->val) % 10;
            carry = (carry + l1->val + l2->val) / 10;
            l1 = l1->next;
            l2 = l2->next;
            if (l1 == NULL && l2 == NULL && carry == 0)
            {
                return res;
            }
            curr->next = node;
            curr = curr->next;
        }
        if (l1 == NULL && l2 == NULL && carry != 0)
        {
            curr->val = carry;
            return res;
        }
        ListNode *rem = (l1 != NULL) ? l1 : l2;
        while (rem != NULL)
        {
            auto node = new ListNode;
            curr->val = (carry + rem->val) % 10;
            cout << curr->val << "\n";
            carry = (carry + rem->val) / 10;
            cout << carry << "\n";
            rem = rem->next;
            if (rem == NULL)
                break;
            curr->next = node;
            curr = curr->next;
        }
        if (carry > 0)
        {
            auto node = new ListNode;
            node->val = carry;
            curr->next = node;
        }
        return res;
    }
};
