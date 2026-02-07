// in this question we have to add 1 in linked list 
/*
Node* reverseLinkedList(Node *head)
{
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        Node* front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
    }
    return prev;
}
Node *addOne(Node *head)
{  
    head=reverseLinkedList(head); // step 1 reverse linked list 
    Node* temp=head;
    int carry=1;
    while(temp!=NULL){ // step 2 adding the 1 to linked list 
        temp->data=(temp->data+carry);
        if(temp->data<10){
            carry=0;
        }
        if(temp->data>10){
            temp->data=0;
            carry=1;
        }
        temp=temp->next;
    } 
    if(carry==1){
        Node* newNode=new Node(1);
        head=reverseLinkedList(head); // step 3 reverse linked list 
        newNode->next=head;
        return newNode;
    }
    head=reverseLinkedList(head);
    return head ;

    
}

*/

// recursive method 
/*
int addHelper(Node* temp){
    if(temp==NULL){
        return 1 ;
    }
    int carry=addHelper(temp->next);
    temp->data=temp->data+carry;
    if(temp->data<10){
        return 0;
    }
    temp->data=0;
    return 1 ;
}

Node *addOne(Node *head)
{
    int carry=addHelper(head);
    if(carry==1){
        Node* newNode=new Node(1);
        newNode->next=head;
        head=newNode;

    }
    return head;
}
*/