/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverse(Node* &head)
    {
        Node* prev =  NULL;
        Node* curr = head;
        
        while(curr != NULL)
        {
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    Node* addOne(Node* head) {
        
        //step 01: reverse the LL
        head = reverse(head);
        
        //step 02: add 1 to LL
        int carry = 1;
        Node* temp = head;
        while(temp != NULL)
        {
            int sum = carry + temp->data;
            //cout << carry << " ";
            carry = sum / 10;
            int digit = sum % 10;
            temp->data = digit;
         
            //special case when we have to add a extra node
            if(temp->next == NULL && carry != 0)
            {
                Node* newnode = new Node(carry);
                newnode->next = NULL;
                temp->next = newnode;
                temp = newnode;
            }

            temp = temp->next;
        }
        //step 03: reverse the LL
        head = reverse(head);
        return head;
    }
};