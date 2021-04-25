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
        ListNode *n1 = l1;
        ListNode *n2 = l2;

        ListNode *ans = new ListNode((n1->val + n2->val) % 10);
        ListNode *curr = ans;
        int carry = ((n1->val + n2->val) / 10);

        n1 = n1->next;
        n2 = n2->next;

        while (n1 != NULL || n2 != NULL)
        {

            int sum = carry;
            if (n1 != NULL)
                sum += n1->val;
            if (n2 != NULL)
                sum += n2->val;
            carry = sum / 10;
            sum = sum % 10;

            curr->next = new ListNode(sum);
            curr = curr->next;

            if (n1 != NULL)
                n1 = n1->next;
            if (n2 != NULL)
                n2 = n2->next;
        }

        if (carry > 0)
        {
            curr->next = new ListNode(carry);
            curr = curr->next;
        }
        return ans;
    }
};
