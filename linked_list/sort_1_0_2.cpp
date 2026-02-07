// in this question we have to sort 0 1 2 
/*
Node* sortList(Node *head){
   Node* temp=head;
   int countzero=0;
   int countone=0;
   int counttwo=0;

   while(temp!=NULL){
       if(temp->data==0){
           countzero++;
       }
       else if (temp->data==1){
          countone++; 
       }
       else{
           counttwo++;
       }
       temp=temp->next;
   }
   temp=head;
   while(temp!=NULL){
       if(countzero){
           temp->data=0;
           countzero--;
       }
       else if (countone){
           temp->data=1;
           countone--;
       }
       else{
           temp->data=2;
           counttwo--;
       }
       temp=temp->next;
   }
   return head ;
}
*/