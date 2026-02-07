// we have to remove the critical points in linked list 
// critical points are the points whose data is either smaller than next and prev node or the data is greater than next and prev node data 
/*
int solve(Node* head){
  Node* prev=head;
  Node* curr=head->next;
  Node* next=curr->next;
  
  if(prev==NULL || curr==NULL || next==NULL ){
      return 0;
  }
  
  int count=0;
  while(next!=NULL){
      if((prev->data<curr->data && next->data<curr->data) ||
     (prev->data>curr->data && next->data>curr->data) ){
         count++;
     }
     prev=curr;
     curr=next;
     next=next->next;
  }
  
  return count;
  
}
*/