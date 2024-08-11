class Solution {
public:
    ListNode* recursion(ListNode* l1, ListNode* l2, int &carry)
    {
        if(l1 == NULL && l2 == NULL && carry == 0)
        {
            return 0;
        }
        int val1 = l1 ? l1 -> val : 0;
        int val2 = l2 ? l2 -> val : 0;
        int sum = val1 + val2 + carry;
        int digit = sum % 10;
        carry = sum / 10;
        ListNode* ans = new ListNode(digit);
        l1 = l1 ? l1 -> next : NULL;
        l2 = l2 ? l2 -> next : NULL;

        ans -> next = recursion(l1, l2, carry);
        return ans;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int carry = 0;
        return recursion(l1, l2, carry);
    }
};