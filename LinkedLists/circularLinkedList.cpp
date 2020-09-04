Geeks for Geeks

// https://practice.geeksforgeeks.org/problems/circular-linked-list/1


// many of you might find this easy,but it's a good practice to revise the code 
bool isCircular(Node *head)
{
    if(!head ) return 0;
  Node *temp=head;
  while(temp){
      if(head == temp->next) return 1;
      else {
          temp=temp->next;
      }
  }
  return false;
}
