//week -10 assignment
//assignment question number - 04



class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        
        unordered_map<int, int>map;
        Node* curr = head2;
        
        while(curr != NULL){
            map[curr -> data]++;
            curr = curr -> next;
        }
        
        curr = head1;
        Node *ans = NULL;
        Node *temp = NULL;
        while(curr != NULL)
        {
            if(map.find(curr -> data) != map.end())
            {
                if(ans == NULL)
                {
                    ans = curr;
                    temp = ans;
                }
                else
                {
                    if(map[curr -> data] > 0)
                    {
                        temp -> next = curr;
                        temp = temp -> next;
                        map[curr -> data]--;
                    }
                }
            }
            curr = curr -> next;
        }
        temp -> next = NULL;
        return ans;
    }
};

