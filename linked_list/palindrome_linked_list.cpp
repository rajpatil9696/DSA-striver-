// check if linked list is palindrome 
/*
#include<stack>
bool isPalindrome(Node *head)
{
    Node* temp=head;
    stack<int>st;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(temp->data!=st.top()){
            return false ;
        }
        else {
            temp=temp->next;
            st.pop();
        }
    }
    return true ;
}
*/

// optimal solution
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

bool isPalindrome(Node *head)
{
   if(head==NULL || head->next==NULL){
       return head;
   }
   Node* slow=head;
   Node* fast=head;
   while(fast->next!=NULL && fast->next->next!=NULL){ // finding the mid 
       slow=slow->next;
       fast=fast->next->next;
   }
   Node* newHead=reverseLinkedList(slow->next); // reverse the half part
   Node* first=head;
   Node* second=newHead;
   while(second!=NULL){
       if(first->data!=second->data){
           reverseLinkedList(newHead);
           return false;
       }
       first=first->next;
       second=second->next;
   }
   reverseLinkedList(newHead);
   return true ;
}

*/