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
    bool check(TreeNode *root,long mi, long ma){
        if(!root) return true;
         
        
        if(root->val <=mi || root->val >=ma) return false;
        
        
        return check(root->left,mi,root->val) && check(root->right,root->val ,ma);
        
    }
    
    
    bool isValidBST(TreeNode* root) {
         return check(root,LONG_MIN,LONG_MAX);
        
    }
};