// in this question we have to find whether the ll have loop or not 
/*
bool detectCycle(Node *head)
{
   Node* slow=head;
   Node* fast=head;
   while(fast!=NULL && fast->next!=NULL){
       slow=slow->next;
       fast=fast->next->next;

       // condition for loop 
       if(slow==fast){
           return true ;
       }
   }
   return false ;
}
*/
