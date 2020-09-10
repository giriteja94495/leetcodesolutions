//   https://leetcode.com/problems/balanced-binary-tree/


// first of all it's not my idea ,i did this using brute force by calculating height at every node and checking 
// and that's not efficient so im sharing this solution here 

class Solution {
public:
    int check(TreeNode *root){
    // at NULL node just return 0
        if(!root) return 0;
        
        // don't get confused with return -1 statement ,it's main thing that is happening at line number 20 ...
        // after this ,you should be able to understand the solution by yourself.
        int left=check(root->left);
        if(left==-1) return -1;
        
        int right=check(root->right);
        if(right==-1) return -1;
        
        if(abs(right-left)>1) return -1;
        
        return max(left,right)+1; 
    }
    bool isBalanced(TreeNode* root) {
        return check(root)!=(-1);
    }
};
