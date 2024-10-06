//week -10 assignment
//assignment question number - 01


class Solution {
  public:
    Node* linkdelete(Node* head, int n, int m) {
        if(head == NULL)
        {
            return head;
        }
        Node * it = head;
        Node * prev = it;
        
        int skip = m;
        int del = n;
        
        while(skip-- && it != NULL)
        {
            prev = it;
            it = it -> next;
        }
        if(it == NULL)
        {
            return head;
        }
        
        while(del-- && it != NULL)
        {
            it = it -> next;
        }
        
        prev -> next = it;
        linkdelete(it, n, m);
        return head;
    }
};