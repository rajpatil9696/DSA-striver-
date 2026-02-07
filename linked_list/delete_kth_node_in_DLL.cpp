/*
Node *deleteNode(Node *head, int k){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        if(count==k){
            break;
        }
        temp=temp->next;
    }
    Node* prevNode=temp->prev;
    Node* nextNode=temp->next;

    if(prevNode==NULL && nextNode==NULL){
        delete temp;
        return NULL;
    }
    else if (prevNode==NULL){
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp ;
        return head;
    }
    else if (nextNode==NULL){
        prevNode->next=NULL;
        temp->prev=NULL;
        delete temp;
        return head;
    }
    prevNode->next=temp->next;
    nextNode->prev=temp->prev;
    temp->next=NULL;
    temp->prev=NULL;
    delete temp;
    return head;
}
*/