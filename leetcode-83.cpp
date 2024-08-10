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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head == NULL)
        {
            return head;
        }

        ListNode* first = head;
        ListNode* second = head->next;

        while(second != NULL)
        {
            if(first->val == second->val)
            {
                first->next = second->next;
                second->next = NULL;
                delete second;
            }
            else{
            first = first->next;
            second = second->next;
            }
            second = first->next;
        }
        return head;
    }
};