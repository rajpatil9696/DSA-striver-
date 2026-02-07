// in this question we have to find the length of the loop in the linked list 
/*
int findLength(Node* slow ,Node* fast){
    int count =1;
    fast=fast->next;
    while(slow!=fast){
        count++;
        fast=fast->next;
    }
    return count;
}

int lengthOfLoop(Node *head) {
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return findLength(slow,fast);
        }
    }
    return 0;
}
*/