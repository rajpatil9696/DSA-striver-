//using stack
/*
#include<stack>
Node* reverseLinkedList(Node *head)
{
    Node* temp=head;
    stack<int> st;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
    return head ;
}
*/
// iterative approach 
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
*/
// recursive approach 
/*
Node* reverseLinkedList(Node *head)
{
    if(head==NULL || head->next==NULL){
        return head ;
    }
    Node* newHead=reverseLinkedList(head->next);
    Node* front=head->next;
    front->next=head;
    head->next=NULL;
    return newHead;
}
*/