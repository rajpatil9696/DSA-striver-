// in this question we have to find the intersection of the two linked lists 
/*
#include<map>

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    map<Node* , int > mpp;
    Node* temp=firstHead;
    while(temp!=NULL){ // traverse the first linked list 
        mpp[temp]=1;
        temp=temp->next;
    }
    temp=secondHead;
    while(temp!=NULL){ // traverse second linked list 
        if(mpp.find(temp) != mpp.end()){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}
*/

// optimal solution 
/*
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    Node* temp1=firstHead;
    Node* temp2=secondHead;
    while(temp1!=temp2){
        temp1=temp1->next;
        temp2=temp2->next;

        if(temp1==temp2){
            return temp1;
        }
        if(temp1==NULL) temp1=secondHead;
        if(temp2==NULL) temp2=firstHead;
    }
    return temp1;
}
*/
