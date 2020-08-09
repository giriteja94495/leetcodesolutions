// https://leetcode.com/problems/maximum-depth-of-n-ary-tree/


/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
 // DFS -Recursive
class Solution {
public:
    int maxDepth(Node* root) {
        if(!root) return 0;
        int height=0;
        for(Node *child:root->children){
            height=max(height,maxDepth(child));
        }
        return 1+height;
    }
};

// BFS -Iterative
class Solution {
public:
    int maxDepth(Node* root) {
        if(!root) return 0;
    queue<Node *> q;
        q.push(root);
        int ans=0;
        while(!q.empty()){
            int size=q.size();
            for(int i=0; i<size; i++){
                Node *temp=q.front();
                q.pop();
                for(Node* child:temp->children){
                    q.push(child);
                }
            }
            ans++;
        }
        return ans;
