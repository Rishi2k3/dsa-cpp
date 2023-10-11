#include <iostream>
using namespace std;

class node
{

public:
    int data;

    node *next;

    node(int num)
    {
        this->data = num;
        this->next = NULL;
    }
};

 void insertathead(node* &head , int d)
    {
        // create a new node and add d at its data value 

        node* temp= new node(d);
        // ab mre paas ek or node hai temp naam ki jiski data value d hai and adress null hai 
        // ab temp ko head par point karana hai
        // temp ke next me head daal denge 

        temp->next=head;
        //ab temp wali node sbse aage hai toh uska address naya head bnega 
        // update head jo temp ko point kre 

        head=temp;

    }

    void print(node* &head)
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<< temp->data<<" ";
            temp=temp->next;
        }

        cout<<endl;



    }


int main()
{
    // creation of a node whoes name is node1
    // node1 has data 10 and points to null value

    node *node1 = new node(10);

    cout << node1->data << endl;
    // cout << node1->next << endl;

    // now create a head that points node1

    node *head = node1;

    // now node1 and head have same adress in heap

    /*insert at node now*/

    insertathead(head,15);

// printing the comnplete linked list 
    print(head);

    insertathead(head,20);

    print(head);

    return 0;
}