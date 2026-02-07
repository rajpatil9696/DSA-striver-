/*
Node* insertAtFront(Node *head, int k) {
    if(head==NULL){
        Node* newNode=new Node(k);
        head=newNode;
        return head;
    }
    Node* newNode=new Node(k);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    return head ;
}
*/