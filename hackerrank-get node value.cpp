//week -10 assignment
//assignment question number - 03
// hackerrank - GET NODE VALUE



int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    
     SinglyLinkedListNode * temp = llist;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp -> next;
    }
    int nodetoaccess = count - positionFromTail;
     SinglyLinkedListNode * temp2 = llist;
    for(int i = 0; i < nodetoaccess - 1; i++)
    {
        temp2 = temp2 -> next;   
    }
    int ans = temp2 -> data;
    return ans;
    
}