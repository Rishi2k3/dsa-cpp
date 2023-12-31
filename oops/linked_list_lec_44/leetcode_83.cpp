/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// remove duplicates from a sorted linked list 

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if(head==NULL)
        {
            return NULL;
        }

        ListNode* curr= head;

        while(curr!=NULL && curr->next!=NULL)
        {
            if(curr->val== curr->next->val)
            {
                ListNode* next_next= curr->next->next;
                ListNode* nodetodelete = curr->next;
                delete nodetodelete;
                curr->next= next_next;

            }

            else
            {
                curr=curr->next;

            }
        }

        return head;


        
    }
};