#include <iostream>
using namespace std;

class node
{
public:
    int data;

    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << " memory with data " << value << " is free :" << endl;
    }
};

void insertode(node *&tail, int element, int d)
{
    // if there is empty list
    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
        temp->next = temp;
    }
    else
    {

        node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // ab curr waha hai jiska data element ke barabar hai

        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(node *&tail)
{
    if(tail==NULL)
    {
        cout<<" list is empty!"<<endl;
        return;
    }
    node *temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

void deletenode(node* &tail, int data)
{
    // empty list case 
    if(tail==NULL)
    {
        cout<<"list is empty"<<endl;
        return ;
    }


    else
    {
        // list is not empty 
        // assuming data is present in the list 
        node* prev=tail;
        node* curr= prev->next;

        while(curr->data!=data)
        {
            prev=curr;
            curr=curr->next;
        }
        // ab curr waha hai jiska data given tha delete node me 

        prev->next=curr->next;

        // >=2 node case 

        if(curr==tail)
        {
            tail=prev;
        }

        // 1 node case 
        // isme tail , curr , prev sab ek jagah point krenge 

        else if(curr==prev)
        {
            tail=NULL;
        }

        curr->next=NULL;
        delete curr;


    }
}

int main()
{

    node *tail = NULL;

    insertode(tail, 4, 3);
    print(tail);

    insertode(tail, 3, 5);
    print(tail);

    insertode(tail, 5, 7);
    print(tail);

    insertode(tail, 7, 9);
    print(tail);

    insertode(tail, 5, 6);
    print(tail);

    insertode(tail, 9, 10);
    print(tail);

    insertode(tail, 3, 4);
    print(tail);

    deletenode(tail,5);
    print(tail);

    return 0;
}