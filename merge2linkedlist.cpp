class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *out=NULL;
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        if(l1->val<=l2->val){
            out=l1;
            out->next=mergeTwoLists(out->next,l2);
        }
        else{
            out=l2;
            out->next=mergeTwoLists(l1,out->next);
        }
        return out;
    }
};
