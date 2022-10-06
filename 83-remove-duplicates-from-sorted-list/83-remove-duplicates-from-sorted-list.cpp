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
    ListNode* deleteDuplicates(ListNode* head) {
       if(!head) return nullptr;
        
       auto node = head;
       ListNode* next= NULL;
        while(node->next){
            if(node->val == node->next->val){
                next = node->next->next;
                delete node->next;
                node-> next = next;
            }
            else{
                node = node->next;
            }
        }
        return head;
    }
};