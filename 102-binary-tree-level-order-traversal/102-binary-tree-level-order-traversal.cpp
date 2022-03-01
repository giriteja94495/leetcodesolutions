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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return {};
        
        queue<TreeNode *> q;
        q.push(root);
      //  ans.push_back({root->val});
        while(!q.empty()){
            int size=q.size();
            vector<int> temp;
           
            for(int i=0;i<size;i++){
                 TreeNode *temp1=q.front();
                  q.pop();
                temp.push_back(temp1->val);
                if(temp1->left) {
                    q.push(temp1->left);
                   // temp.push_back(temp1->left->val);
                }
                if(temp1->right) {
                    q.push(temp1->right);
                   // temp.push_back(temp1->right->val);
                }
               
            }
            ans.push_back(temp);
        }
        return ans;
        
        
    }
};