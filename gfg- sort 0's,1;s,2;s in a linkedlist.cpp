
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    void insertattail(Node* &head, Node* &tail, Node* &tomove)
    {
        if(head == NULL && tail == NULL)
        {
            head = tomove;
            tail = tomove;
        }
        else{
            tail->next = tomove;
            tail = tomove;
        }
    }
    
    void print(Node* head)
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
            
            Node* zerohead = NULL;    
            Node* zerotail = NULL;
            
            Node* onehead = NULL;     
            Node* onetail = NULL;
            
            Node* twohead = NULL;
            Node* twotail = NULL;
            
            Node* temp = head;
            
            while(temp != NULL)
            {
                Node* tomove = temp;
                temp = temp->next;
                tomove->next = NULL;
                
                if(tomove->data == 0)
                {
                    insertattail(zerohead, zerotail, tomove);
                }
                else if(tomove->data == 1)
                {
                    insertattail(onehead, onetail, tomove);
                }
                else if(tomove->data == 2)
                {
                    insertattail(twohead, twotail, tomove);
                }
            }
            
            
            if(zerohead != NULL)
            {
                //zero list is not empty
                if(onehead != NULL)
                {
                    //one list is not empty
                  zerotail->next = onehead;  
                  onetail->next = twohead;
                }
                else{
                    //one list is empty
                    zerotail->next = twohead;
                }
                return zerohead;
            }
            else{
                //zero list is empty
                if(onehead != NULL)
                {   //one list is not empty
                    onetail->next = twohead;
                    return onehead;
                }
                else{
                    //one list is empty
                    return twohead;
                }
            }
    }
};


