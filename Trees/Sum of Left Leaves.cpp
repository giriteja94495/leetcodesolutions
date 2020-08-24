// https://leetcode.com/problems/sum-of-left-leaves/


// I think this is the best approach towards this problem
class Solution {
public:
    int calculate(TreeNode *root,int &sum){
        if(!root) return 0;
        if(root->left) {
            if(!root->left->left && !root->left->right)
                     sum+=(root->left->val);
            }
        calculate(root->left,sum);
        calculate(root->right,sum);
        return sum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        int sum=0;
        
        calculate(root,sum);
        return sum;
    }
};
