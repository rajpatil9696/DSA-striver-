// in this question we have to rearrange the odd and even places 
/*
Node* oddEvenList(Node* head)
{   if(head!=NULL && head->next!=NULL){
    return head ;
}
	Node* odd=head;
    Node* even=head->next;
    Node* evenhead=head->next;
    
    while(even!=NULL && even->next!=NULL){  // till even reaches to the end 
            odd->next=odd->next->next;
            even->next=even->next->next;

            odd=odd->next;
            even=even->next;

    } 
    odd->next=evenhead;
    return head ;
}
*/