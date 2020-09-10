// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/



class Solution {
public:
    unordered_map<int,int> mp;
    TreeNode* helper(vector<int> preorder,int prestart,int preend,vector<int> inorder,int instart ,int inend){
        // base case
        if(prestart>preend || instart > inend) return NULL;
        
        // we know that,in preorder we always visit root first
        TreeNode *root=new TreeNode(preorder[prestart]);
        
        // get the index where this root is in inorder so that we will get to know the elements to left of it are always in left sub tree
        // and elements to right of it are in right sub tree( coz this is inorder -(LEFT ROOT RIGHT).
        
        
        int inord=mp[root->val];
        
        
        // We will get to know how many left side elements are there 
        int numsLeft=inord-instart;
        
        // recursively call on root left ,what will be the start of pre order ? as we already created root node of prestart 
        // it becomes prestart +1 
        
        // preEnd = we got to know the number of elements that can be constructed on root left from inorder traversal that is numsLeft
        // so preEnd wil become prestart + numsLeft
        
        
         // Let's come to the inorder ,instart will not change ,but in end will become inord -1 as all the elemtns to left of it
         // will always in its left subtree
         
        
        root->left=helper(preorder,prestart+1,prestart+numsLeft,inorder,instart,inord-1);
        
        // now preorder start will change to prestart+numsLeft+1,and its end will be same (as preOrder is ROOT,LEFT ,RIGHT) 
        // Inorder start will be just one increment of inord and end remains same 
       
        
        
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
