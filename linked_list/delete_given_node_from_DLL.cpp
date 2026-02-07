/*
void deleteNode(Node* node) {
    Node* prevNode=node->prev;
    Node* nextNode=node->next;
    if(prevNode==NULL && nextNode==NULL){
        return ;
    }
    else if(nextNode==NULL){
        prevNode->next=NULL;
        node->prev=NULL;
        delete node;
    }
    else if (prevNode==NULL){
        nextNode->prev=NULL;
        node->next=NULL;
        delete node ;
    }

    prevNode->next=nextNode;
    nextNode->prev=prevNode;

    node->next=NULL;
    node->prev=NULL;

    delete node; 
}
*/