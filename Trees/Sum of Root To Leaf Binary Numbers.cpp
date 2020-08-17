// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/


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
 
    int helper(TreeNode *root , int sum){
        if(!root) return 0;
        sum*=2;
        sum+=root->val;
        if(!root->left && !root->right) {
            return sum;
        }
        
       return helper(root->left,sum)+helper(root->right,sum);
    }
    int sumRootToLeaf(TreeNode* root) {
        if(!root ) return 0;
        int sum=0;
        
        return helper(root,sum);
    }
};
