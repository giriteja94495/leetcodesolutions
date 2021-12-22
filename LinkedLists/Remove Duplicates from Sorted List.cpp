// My solution
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ans=head;
        while(head){
           ListNode* temp =head;
            while( temp  && temp->val==head->val){
                 temp=temp->next;
            }
            head->next=temp;
            head=temp;
        }
        return ans;
    }
};


// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

// the solution i liked 

public ListNode deleteDuplicates(ListNode head) {
        ListNode node = head;
        while (node != null && node.next != null) {
            if (node.val == node.next.val) node.next = node.next.next;
            else node = node.next;
        }
        return head;
    }

