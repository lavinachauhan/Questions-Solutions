class Solution {
  public:
    Node* reverse(Node* &head)
    {
        Node* prev = NULL;
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
    
    int getlength(Node* &head)
    {
        int len = 0;
        Node* temp = head;
        while(temp != NULL)
        {
            len++;
            temp = temp -> next;
        }
        return len;
    }
    
    void newnode(int carry, Node* &temp)
    {
        Node* newnode = new Node(carry);
        newnode -> next = NULL;
        temp -> next = newnode;
        temp = newnode;
        return;
    }
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(struct Node* num1, struct Node* num2) {
        
        int len1 = getlength(num1);
        int len2 = getlength(num2);
        // step: 01 reverse both linked list
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        //step: 02 add both numbers
        Node* temp1 = num1;
        Node* temp2 = num2;
        
        int carry = 0;
        int val1, val2, digit, sum;
        
        while(temp1 != NULL && temp2 != NULL)
        {
            val1 = temp1 -> data;
            val2 = temp2 -> data;
            sum = val1 + val2 + carry;
            digit = sum % 10;
            carry = sum / 10;
            if(len1 > len2){
                temp1 -> data = digit;
                if(temp1 -> next == NULL && carry != 0)
                {
                    newnode(carry, temp1);
                }
            }
            else{
                temp2 -> data = digit;
                if(temp2 -> next == NULL && carry != 0)
                {
                    newnode(carry, temp2);
                }
            }
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        
        while(temp1 != NULL)
        {
            val1 = temp1 -> data;
            sum = val1 + carry;
            digit = sum % 10;
            carry = sum / 10;
            temp1 -> data = digit;
            if(temp1 -> next == NULL && carry != 0)
            {
                newnode(carry, temp1);
            }
            temp1 = temp1 -> next;
        }
        
        while(temp2 != NULL)
        {
            val2 = temp2 -> data;
            sum = val2 + carry;
            digit = sum % 10;
            carry = sum / 10;
            temp2 -> data = digit;
            
            if(temp2 -> next == NULL && carry != 0)
            {
                newnode(carry, temp2);
            }
            temp2 = temp2 -> next;
        }
        
        //step: 03 reverse that linked list whose length is greater
        if(len1 > len2)
        {
            num1 = reverse(num1);
        }
        else{
            num2 = reverse(num2);
        }
        return len1 > len2 ? num1 : num2;
    }
};