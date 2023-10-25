#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertathead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

int getlength(node *&head)
{
    node *temp = head;
    int len = 0;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertattail(node *&tail, int d)
{
    node *temp = new node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

void insertatmid(node* &tail,node* &head, int position , int d)
{
    int len=getlength(head);
    if(position==1)
    {
        insertathead(head,d);
        return;

    }
    int count=1;
    node* temp=head;
    while(count<position-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL)
    {
        insertattail(tail,d);
        return;
    }
    else
    {
        node* nodetoinsert=new node(d);
        temp->next->prev=nodetoinsert;
        nodetoinsert->next=temp->next;
        temp->next=nodetoinsert;
        nodetoinsert->prev=temp;


    }
}
void deletenode(node *&tail, node *&head, int position)
{
    // for first element
    if (position == 1)
    {
        node* temp=head;
        temp->next->prev=NULL;

        // updating head position when deleting first  node 
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    // for rest all elements
    else
    {

        node *prev = NULL;
        node *curr = head;

        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;

// updating tail position if deleting last node 
        if (prev->next == NULL)
        {
            tail = prev;
        }
        delete curr;
    }
}

int main()
{
    
   
    node *node1 = new node(10);
    // cout<<node1->data<<endl;

    node *head = node1;
    node *tail = node1;

    print(head);

    insertathead(head, 15);
    print(head);
    insertathead(head, 20);
    print(head);
    insertathead(head, 25);
    print(head);

    insertattail(tail, 5);
    print(head);

    insertattail(tail, 0);
    print(head);
   

    insertatmid(tail,head,4,47);
    print(head);


    deletenode(tail,head,7);
    print(head);
    cout<< " head is : "<<head->data<<endl;    
    cout<< " tail is : "<<tail->data<<endl; 

    insertathead(head,76);
    print(head);   


    return 0;
}