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
    int findlen(ListNode* &head)
    {
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        //base case 
        if(head == NULL || head -> next == NULL)
        {
            return head;
        }
        int len = findlen(head);
        if(len < k)
        {
            return head;
        }
        int pos = 0;
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(pos < k)
        {
            ListNode* forward = curr -> next; 
            curr -> next = prev;
            prev = curr;
            curr = forward;
            pos++;
        }

        ListNode* recursionHead = reverseKGroup(curr, k);
        head -> next = recursionHead;
        return prev;
    }
};