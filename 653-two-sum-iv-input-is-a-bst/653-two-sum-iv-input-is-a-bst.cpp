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
    vector<int> nums;
    void inorder(TreeNode *root){
        if(!root) return ;
        inorder(root->left);
        nums.push_back(root->val);
        inorder(root->right);
    }
        
    
    bool findTarget(TreeNode* root, int target) {
        if(!root->left && !root->right)return false;
        inorder(root);
        for(int i=0,j=nums.size()-1;i<nums.size() && j>=0;){
            if( i!=j && nums[i]+nums[j] == target){
                return true;
            }
            else if(nums[i]+nums[j] < target){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
        
    }
};