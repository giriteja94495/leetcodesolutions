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
