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
    int maxDepth(TreeNode* root) {
        
        // BFS
        // int ans=0;
        // if(!root) return ans;
        // queue<TreeNode*> q;
        // q.push(root);
        // while(!q.empty()){
        //     ans++;
        //     int len=q.size();
        //     for(int i=0;i<len;i++){
        //         TreeNode *temp=q.front();
        //         q.pop();
        //         if(temp->left) q.push(temp->left);
        //         if(temp->right) q.push(temp->right);
        //     }
        // }
        //return ans;
        
        // DFS
        
        if(!root) return 0;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
        
         
    }
};