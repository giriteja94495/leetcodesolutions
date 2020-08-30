//  https://leetcode.com/problems/palindrome-linked-list/


// I literally spent 40 mins to figure out what's wrong with my code .....but i don't regret it hahaha....the mistake i made is written 
// at the last .

class Solution {
public:
  ListNode* reverse(ListNode *head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *ptr = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return ptr;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *temp=head;
        ListNode *slow=head;
        ListNode *fast=head;
       
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast) slow=slow->next;
        slow=reverse(slow);
        while(slow){
            if(slow->val != head->val) return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
};


// the mistake was at line number 21...can you see that little logical operator and (&&) i had put or (||) and was scratching my head whol
// 40 mins

