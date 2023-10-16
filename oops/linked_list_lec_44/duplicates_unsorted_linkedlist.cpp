Node *removeDuplicates(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    
    Node* curr= head;
    Node* prev =NULL;
    
    unordered_map <int,bool> m;

    while(curr!=NULL)
    {
        if(m[curr->data]==true)
        {
            Node* temp= curr;
            prev->next=curr->next;
            curr=curr->next;
            temp->next=NULL;
            delete temp;
        }
        else
        {
        m[curr->data]=true;
        prev=curr;
        curr=curr->next;
        }
    }
    return head;
    
}