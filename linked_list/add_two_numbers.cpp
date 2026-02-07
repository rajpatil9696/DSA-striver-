// addition of two numbers 
/*
Node *addTwoNumbers(Node *num1, Node *num2)
{
  Node* dummyNode=new Node(-1);
  Node* curr=dummyNode;
  Node* temp1=num1;
  Node* temp2=num2;
  int carry=0;
  while(temp1!=NULL || temp2!=NULL){
      int sum=carry;
      if(temp1) sum=sum+temp1->data;
      if(temp2) sum=sum+temp2->data;
      Node* newNode=new Node(sum%10);
      carry=sum/10;

      curr->next=newNode;
      curr=curr->next;

      if(temp1) temp1=temp1->next;
      if(temp2) temp2=temp2->next;
  }
  if(carry){
      Node* newNode=new Node(carry);
      curr->next=newNode;
  }
  return dummyNode->next;
}
*/