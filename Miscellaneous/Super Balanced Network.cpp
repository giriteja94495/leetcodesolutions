/* question: There is a computer network connected in a Binary tree-like structure. You as a network engineer want to connect any of the leaf computers with all other leaf computers with wlan wires. It is not possible to connect two leaf computer if the difference between their depth from the root is greater than 1. You need to tell your Boss whether it is possible to connect any of the leaf computers with all other leaf computers.

Note that, if the network contains only one leaf computer then you don't need to connect it. That is, the output will be "YES"

Input:
First line of input contains the number of test cases T. For each test case, there will be only a single line of input which is a string representing the network as described below: 
*/


#include <bits/stdc++.h>

using namespace std;



// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends



void getResult(Node *root, int depth, int &mindepth, int &maxdepth){
    if(!root) return;
    if(!root->left && !root->right){
        mindepth=min(mindepth,depth);
        maxdepth=max(maxdepth,depth);
        return ;
    }
    getResult(root->left,depth+1,mindepth,maxdepth);
     getResult(root->right,depth+1,mindepth,maxdepth);
     return ;
}


bool isPossible(Node *root) {
    int mindepth=INT_MAX;
    int maxdepth=INT_MIN;
    getResult(root,1,mindepth,maxdepth);
    if(maxdepth-mindepth <=1) return  true;
    return false;
}


// { Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        if (isPossible(root))
            cout << "Yes\n";
        else
            cout << "No\n";

    }


    return 0;
}  // } Driver Code Ends
