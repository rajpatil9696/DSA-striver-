// in this question we have to delete the all occurence of the key in the DLL
/*
Node * deleteAllOccurrences(Node* head, int k) {
   Node* temp=head;
   while(temp!=NULL){
       if(temp->data==k){
           if(temp==head){
               head=head->next;
           }
           Node* nextNode=temp->next;
           Node* prevNode=temp->prev;

           if(nextNode!=NULL){
               nextNode->prev=prevNode;
           }
           if(prevNode!=NULL){
               prevNode->next=nextNode;
           }

           delete temp;
           temp=nextNode;
       }
       else{
           temp=temp->next;
       }
   }
   return head ;
}

*/