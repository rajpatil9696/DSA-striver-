// in this question we have to find the mid of linked list 
/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       if(head==NULL && head->next==NULL){
        return head;
       }
       ListNode* slow=head;
       ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
       return slow ;
    }
};
*/
// brute force approach 
/*
Node *findMiddle(Node *head) {
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    int mid=(count/2)+1;
    temp=head;
    while(temp!=NULL){
        mid--;
        if(mid==0){
            break;
        }
        temp=temp->next;
    }
    return temp ;
}
*/
// optimal solution 
/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
         return slow ;
    }
};
*/