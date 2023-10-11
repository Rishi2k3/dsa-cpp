#include <iostream>
using namespace std;

class node
{

public:
    int data;

    node *next;

public:
    // constructor
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // destructor

   
};

void insertathead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertattail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void insertatmid(node *&tail, node *&head, int position, int d)
{
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }
    node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void print(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void deletenode(node *&tail, node *&head, int position)
{
    // for first element
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
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
        prev->next = curr->next;
        curr->next = NULL;

        if (prev->next == NULL)
        {
            tail = prev;
        }
        delete curr;
    }
}

int main()
{
    int position;
    node *node1 = new node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    node *head = node1;
    node *tail = node1;

    print(head);

    // insertathead(head,15);
    insertattail(tail, 15);

    print(head);

    // insertathead(head,20);
    insertattail(tail, 20);

    print(head);

    insertatmid(tail, head, 1, 13);
    print(head);

    cout << "head is:" << head->data << endl;
    cout << "tail is:" << tail->data << endl;

cout<<" enter the position you want to delete: ";
cin>>position;
    deletenode(tail, head, position);
    print(head);

    cout << "head is:" << head->data << endl;
    cout << "tail is:" << tail->data << endl;

    return 0;
}