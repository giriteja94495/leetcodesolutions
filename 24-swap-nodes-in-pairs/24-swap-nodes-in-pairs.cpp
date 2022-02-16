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
        // if(!head || head->next==nullptr) return head;
        // int len=findLen(head);
        // ListNode *ansNode=head->next;
        // while(len && head->next && head->next->next){
        //     ListNode *temp1=head;
        //     ListNode *temp2=head->next;
        //     ListNode *temp3=head->next->next;
        //     temp2->next=temp1;
        //     temp1->next=temp3;
        //     len=len-2;
        //     head=temp3;
        // }
        // return ansNode;
        if ((head == nullptr)||(head->next == nullptr))
            return head;
        ListNode* n = head->next;
        head->next = swapPairs(head->next->next);
        n->next = head;
        return n;
     
    }
};