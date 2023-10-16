Node* sortList(Node *head){

    int zerocount=0;
    int onecount=0;
    int twocount=0;

    Node* curr= head;

    while(curr!=NULL)
    {
        if(curr->data==0)
        {
            zerocount++;
        }
        else if(curr->data==1)
        {
            onecount++;
        }
        else if(curr->data==2)
        {
            twocount++;
        }

        curr=curr->next;
    }
    curr=head;

    while(curr!=NULL)
    {
        if(zerocount!=0)
        {
            curr->data=0;
            zerocount--;
        }
        else if(onecount!=0)
        {
            curr->data=1;
            onecount--;
        }
        else if(twocount!=0)
        {
            curr->data=2;
            twocount--;
        }

        curr=curr->next;

    }

    return head;





}