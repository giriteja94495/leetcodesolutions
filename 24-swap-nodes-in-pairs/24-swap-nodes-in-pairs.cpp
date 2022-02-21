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
    int findLen(ListNode * head){
        int len=0;
        ListNode* temp=head;
        while(temp){
            len++;
            temp=head->next;
        }
        return len;
    }
    ListNode* swapPairs(ListNode* head) {
        if ((head == nullptr)||(head->next == nullptr))
            return head;
        ListNode* n = head->next;
        head->next = swapPairs(head->next->next);
        n->next = head;
        return n;
     
    }
};