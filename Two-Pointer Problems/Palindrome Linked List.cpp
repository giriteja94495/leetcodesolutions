// https://leetcode.com/problems/palindrome-linked-list/





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
    ListNode *reverse(ListNode *root){
        if(!root) return NULL;
        ListNode *pre=NULL;
        ListNode *temp;
        while(root){
            temp=root->next;
            root->next=pre;
            pre=root;
            root=temp;
        }
        return pre;
        
    }
    bool isPalindrome(ListNode* head) {
        if(!head) return true;
         ListNode *slow=head;
        ListNode *fast=head;
        // let's find the middle element of linked list
    
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        
        /*
        [1,2,3,4,3,2,1]
        
        let us take this example ,after the above while loop 
        slow is pointing to 4 and we reverse the linked list after 4 and attach it to 
        4 and our slow becomes slow->next so that we can neglect the alone element of 
        odd length linkedlist
        
        the linkedlist becomes [1 2 3 4 1 2 3]
        and head points to first 1
        and slow points to second 1
        */
        

        slow =slow->next;
        /*
        okay ,wait ! what about even length linkedlist?
        let's take a look on that
        consider the linkedlist as  [1,2,3,4,4,3,2,1]
        after the slow and fast pointer while loop our slow will be pointing to first occurance of 4 ,so we reverse the [4,3,2,1] part and attach it to first 4 
        and we move our slow pointer to next so that our checking becomes easy as we compare the linked list like this
        [1 2 3 4 1 2 3 4 ]and our head is pointing to first 1 and slow is pointing to second 1  
        
        */
        
        while(slow){
            if(head->val !=slow->val) return false;
            
            head=head->next;
            slow=slow->next;
        }
        
        return true;
        
    }
};
