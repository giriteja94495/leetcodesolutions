/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void swap(TreeNode *parent, TreeNode *le, TreeNode *ri){
        if(!parent) return ;
        parent->left=ri;
        parent->right=le;
        
    }
    
    
    TreeNode* invertTree(TreeNode* root) {
      if(!root) return root;
      TreeNode *temp=root;
        swap(temp,temp->left,temp->right);
        invertTree(root->left);
        invertTree(root->right);       
      return root;
    }
};