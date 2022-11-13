/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode *ans;
    void solve(TreeNode *clonedRoot, TreeNode* target){
        if(!clonedRoot) return ;
        if(clonedRoot->val==target->val) {
            ans= clonedRoot;
        }
        solve(clonedRoot->left,target);
        solve(clonedRoot->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        solve(cloned,target);
        return ans;
    }
};