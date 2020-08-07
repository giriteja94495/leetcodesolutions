//  https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/


// RECURSIVE APPROACH   4ms 


class Solution {
public:
    
     void changeValue(TreeNode *root, int &accumulated_sum){
         if(!root) return ;
         changeValue(root->right,accumulated_sum);
         root->val+=accumulated_sum; // assigning the (current node sum + accumulated sum)
         accumulated_sum=root->val; // new acccumulated sum will be the previous root->val
         changeValue(root->left,accumulated_sum);
     }

    TreeNode* bstToGst(TreeNode* root) {
        // first intuition was to use the inorder traversal and calulate the reverse
        // accumulated sum from right to left ,later got stuck on ,how do i assign the sum
        // to the root values ..later i found a very good recursive and iterative approaches to 
        // this problem
        
        int accumulated_sum=0;
        changeValue(root,accumulated_sum);
        return root;
        
    }
};


// Iterative approach 0ms


class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        
        stack<TreeNode *> st;
        int sum=0;
        TreeNode *curr=root;
        while(!st.empty() || curr){
            while(curr){
                st.push(curr);
                curr=curr->right;
            }
            curr=st.top();
            st.pop();
            curr->val+=sum;
            sum=curr->val;
            curr=curr->left;
        }
        
        return root;
        
    }
};
