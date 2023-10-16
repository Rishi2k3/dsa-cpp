// Remove Duplicates From an Unsorted Linked List

#include <iostream>

Node *removeDuplicates(Node *head)
{
   if(head==NULL)
   {
       return NULL;
   }

   Node * curr= head;
   while(curr!=NULL)
   {
       Node* temp= curr->next;
       Node* prev=curr;

       while(temp!=NULL)
       {
           if(curr->data==temp->data)
           {
               Node* nodetodelete= temp;
               prev->next= temp->next;
               temp=temp->next;
               delete nodetodelete;
           }
           else
           {
               prev=temp;
               temp=temp->next;
           }
       }
       curr=curr->next;
   }
   return head;
}