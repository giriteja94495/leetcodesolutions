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
class Solution {
public:
     int len(ListNode *root){
        int val=0;
        while(root){
            val++;
            root=root->next;
        }
        return val;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int val=len(head);
        if(head->next==NULL && n==1) return NULL;
        if(head->next->next==NULL && n==2) return head->next;
        if(val==n) return head->next;
         int star=val-n-1;
        ListNode *temp=head;
        ListNode *temp2;
        while(star){
            if(temp->next){
                 temp=temp->next;
            }
           
            star--;
        }
        if(temp->next->next){
             temp2=temp->next->next;
        }
        else{
            temp2=NULL;
        }
       
        temp->next=temp2;
        return head;
    }
};