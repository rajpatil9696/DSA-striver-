/*

Node * deleteLastNode(Node *head) {
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
     Node* temp=head;
     while(temp->next!=NULL){
         temp=temp->next;
     }
     Node* prevNode=temp->prev;
     prevNode->next=NULL;
     temp->prev=NULL;
     temp->data=NULL;
     return head ;
}
*/