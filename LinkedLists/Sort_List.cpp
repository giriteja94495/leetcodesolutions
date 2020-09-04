//  https://leetcode.com/problems/sort-list/



// i think this is the most standard question ,yet many people wouldn't be knowing how to implement
class Solution {
public:
    ListNode* merge(ListNode *l1,ListNode *l2){
        ListNode  *dummy=new ListNode(0),*prev=dummy;
        
        while(l1 && l2){
            if(l1->val <l2->val){
                prev->next=l1;
                l1=l1->next;
            }
            else{
                prev->next=l2;
                l2=l2->next;
            }
            prev=prev->next;
        }
        if(l1){
            prev->next=l1;
        }
        if(l2){
            prev->next=l2;
        }
        return dummy->next;
        
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *slow=head,*fast=head;
        ListNode *prev=NULL;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
        
        
        ListNode *l1=sortList(head);
        ListNode *l2=sortList(slow);
        
        return merge(l1,l2);

        
    }
};
