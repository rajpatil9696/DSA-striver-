/*
Node * deleteHead(Node *head) {
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return NULL;
        
    }
    Node* temp=head;
    head=head->next;
    head->prev=NULL;
    temp->next=NULL;
    delete temp;

    return head;
}
*/