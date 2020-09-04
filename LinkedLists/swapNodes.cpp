// https://www.geeksforgeeks.org/swap-nodes-in-a-linked-list-without-swapping-data/

// For clear understanding,refer the above link...I just replicated that code

#include <bits/stdc++.h> 
using namespace std; 
  
/* A linked list node */
class Node  
{  
    public: 
    int data;  
    Node *next;  
}; 
void swapNodes(Node **head_ref, int x, int y)  
{  
    if(head_ref==NULL) return ;
    if(x==y)return ;
    
    Node *prevx=NULL;
    Node *currx=*head_ref;
    while(currx && currx->data!=x){
        prevx=currx;
        currx=currx->next;
    }
    
    Node *prevy=NULL;
    Node *curry=*head_ref;
    while(curry && curry->data!=y){
        prevy=curry;
        curry=curry->next;
    }
    
   if(currx==NULL || curry==NULL) return ;
   
   if(prevx!=NULL){
      prevx->next=curry;
   }
   else{
       *head_ref=curry;
   }
   
   if(prevy!=NULL){
       prevy->next=currx;
   }
   else{
       *head_ref=currx;
   }
    Node *temp=curry->next;
    curry->next=currx->next;
    currx->next=temp;

    
}
void push(Node** head_ref, int new_data)  
{  
    /* allocate node */
    Node* new_node =new Node(); 
  
    /* put in the data */
    new_node->data = new_data;  
  
    /* link the old list off the new node */
    new_node->next = (*head_ref);  
  
    /* move the head to point to the new node */
    (*head_ref) = new_node;  
}  
  
/* Function to print nodes in a given linked list */
void printList(Node *node)  
{  
    while(node != NULL)  
    {  
        cout<<node->data<<" ";  
        node = node->next;  
    }  
}  

int main()  
{  
    Node *start = NULL;  
  
    /* The constructed linked list is:  
    1->2->3->4->5->6->7 */
    push(&start, 7);  
    push(&start, 6);  
    push(&start, 5);  
    push(&start, 4);  
    push(&start, 3);  
    push(&start, 2);  
    push(&start, 1);  
  
    cout << "Linked list before calling swapNodes() ";  
    printList(start);  
  
    swapNodes(&start, 4, 3);  
  
    cout << "\nLinked list after calling swapNodes() ";  
    printList(start);  
  
    return 0;  
}  
  
