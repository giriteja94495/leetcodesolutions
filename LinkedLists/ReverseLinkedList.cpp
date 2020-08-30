// https://leetcode.com/problems/reverse-linked-list/

// Basic Method.

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pre=NULL;
       ListNode *temp;
        while(head){
            temp=head->next;
            head->next=pre;
            pre=head;
            head=temp;
        }
        return pre;
    }
};

// recursive solution ..very very important for interviews
class Solution {
public:
   
    ListNode* reverseList(ListNode* head) {
       if(!head || !head->next) return head;
        ListNode *curr=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return curr;
        
    }
};
