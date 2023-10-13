// reverse linked list in k group 
// ques-25 leeetcode 


class Solution {
public:
   
    int getlength(ListNode* &head)
    {
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;

        }
        return len;
    }
    ListNode* reverseKGrouplen(ListNode* head, int k, int length) 
    {
         if(length<k)
         {
             return head;
         }

        ListNode * curr=head;
        ListNode * prev= NULL;
        ListNode * forward=NULL;

        int count =0;
        while(curr!=NULL && count<k)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }

        // recursive call
        // now head at starting element but starting element is at kth position now 
        // ab usko recursive wale output se jodna hai 
        if(forward!=NULL)
        {
            head->next= reverseKGrouplen(forward,k,length-k);
        }
        return prev;

    }

    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        int lengthoflist= getlength(head);
        return reverseKGrouplen(head,k,lengthoflist);


    }
    


};