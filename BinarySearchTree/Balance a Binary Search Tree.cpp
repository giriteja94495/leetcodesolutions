// https://leetcode.com/problems/balance-a-binary-search-tree/

// Intutuion was to get inorder traversal and form a tree with that ...but i struggled so much to build a tree recursively from inorder 
// traversal


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
    vector<TreeNode *> temp;
    void inorder(TreeNode *root,vector<TreeNode *>&temp){
        if(!root) return ;
        inorder(root->left,temp);
        temp.push_back(root);
        inorder(root->right,temp);
    }
    TreeNode *helper(vector<TreeNode*> &temp,int start,int end){
        if(start>end) return NULL;
        int mid=(start+end)/2;
        TreeNode *root=temp[mid];
        root->left=helper(temp,start,mid-1);
        root->right=helper(temp,mid+1,end);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root,temp);
        TreeNode *res=helper(temp,0,temp.size()-1);
        return res;
    }
    
};
