// i  this question we have to reverse the linked list 
/*
Node* reverseDLL(Node* head)
{   
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prevNode=NULL;
    Node* curr=head;
    while(curr!=NULL){
        prevNode=curr->prev;
        curr->prev=curr->next;
        curr->next=prevNode;

        curr=curr->prev;
    }
    return prevNode->prev;
}
*/