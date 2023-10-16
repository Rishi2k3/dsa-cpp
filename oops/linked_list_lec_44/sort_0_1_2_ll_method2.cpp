#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


void insertattail(Node* &tail,Node* curr)
{
    tail->next=curr;
    tail=curr;
}

Node* sortList(Node *head){

    // approach 2 
    // no data replacement 
    // divide linked list into 3 parts having 0 1 2 each 
    // will merge them later 


// step 1 is to create a dummy node having -1 at its index 

    Node* zerohead = new Node(-1);
    Node* onehead = new Node(-1);
    Node* twohead = new Node(-1);

    Node * zerotail= zerohead;
    Node * onetail= onehead;
    Node * twotail= twohead;
    
    Node* curr= head;
    
    // step 2 is to push values in dummy nodes 
    
    while(curr!=NULL)
    {
        int value = curr->data;
        
        if(value==0)
        {
            insertattail(zerotail,curr);
        }
        else if(value==1)
        {
            insertattail(onetail,curr);
        }
        else if(value==2)
        {
            insertattail(twotail,curr);
        }
        
        curr=curr->next;
    }
    
    // merge 3 sublist to get a final ans 

    // if onehead is null 

    if(onehead==NULL)
    {
        zerotail->next=twohead->next;
    }

    // one head is not null 
    else
    {
        zerotail->next=onehead->next;
        onetail->next=twohead->next;
        
        
    }
    
    twotail->next=NULL;

    // setup head 

    head= zerohead->next;
    
    // delete sub nodes 

    delete zerohead;
    delete onehead;
    delete twohead;

    return head;
    

    
    

    
}









