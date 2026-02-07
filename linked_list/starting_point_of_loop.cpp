// in this question we have to find the starting point of the loop in linked list 
/*
 Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){ // if they collide means LL have loop 
            slow=head;
            while(slow!=fast){ // place slow at head and fast at collision point and traverse by one 
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return NULL;
*/