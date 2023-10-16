// Remove Duplicates From an Unsorted Linked List

Node *removeDuplicates(Node *head){
 
    if(head==NULL) {
        return head;
    }
 
    Node* curr = head;
 
    while(curr != NULL) {
 
        Node* temp = curr;
 
        while(temp->next!= NULL) {
            
            if(curr -> data == temp -> next -> data) {
 
                Node* next_next = temp -> next -> next;
                Node* nodeToDelete = temp -> next;
                delete(nodeToDelete);
                temp -> next = next_next;
 
            }
            else{
                temp = temp -> next;
            }            
 
        }
 
        curr = curr -> next;
 
    }
 
    return head;
    
}