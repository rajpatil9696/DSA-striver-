/*

Node * insertAtTail(Node *head, int k) {
    if(head==NULL){
        Node* newNode=new Node(k);
        return newNode;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(k);
    temp->next=newNode;
    newNode->prev=temp;
    return head;
}
*/