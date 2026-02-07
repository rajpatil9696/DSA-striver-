/*
Node* deleteMiddle(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL ;
    }
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    temp=head;
    int res=count/2;
    while(temp!=NULL){
        res--;
        if(res==0){
            Node* middle=temp->next;
            temp->next=temp->next->next;
            delete middle;
            break;
        }
        temp=temp->next;
    }
    return head ;
}
*/
// optimal approach 
/*

Node* deleteMiddle(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL ;
    }
    Node* slow=head;
    Node* fast=head;
    // skip one step of slow 
    fast=fast->next->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* middle=slow->next;
    slow->next=slow->next->next;
    delete middle ;
    return head;
}
*/