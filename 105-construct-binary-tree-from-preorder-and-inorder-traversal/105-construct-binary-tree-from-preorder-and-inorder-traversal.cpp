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
   unordered_map<int,int> mp;
    TreeNode* helper(vector<int> preorder,int prestart,int preend,vector<int> inorder,int instart ,int inend){
        if(prestart>preend || instart > inend) return NULL;
        
        
        TreeNode *root=new TreeNode(preorder[prestart]);
        int inord=mp[root->val];
        
        int numsLeft=inord-instart;
        
        root->left=helper(preorder,prestart+1,prestart+numsLeft,inorder,instart,inord-1);
        root->right=helper(preorder,prestart+numsLeft+1,preend,inorder,inord+1,inend);
        
        return root;
        
    }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
      return helper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
    }
};