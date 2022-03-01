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
        
        // DFS
        // if(!root) return 0;
        // return 1+max(maxDepth(root->left),maxDepth(root->right));
        
        
        
        //BFS
       int ans=0;
       if(!root) return 0;
       queue<TreeNode *> q;
       q.push(root);
       while(!q.empty()){
           ans++;
           int size=q.size();
           for(int i=0;i<size;i++){
               TreeNode *temp=q.front();
               q.pop();
               if(temp->left) q.push(temp->left);
               if(temp->right) q.push(temp->right);
           }
       }
        return ans;
        
    }
};