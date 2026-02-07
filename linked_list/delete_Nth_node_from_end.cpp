// in this question we have to delete the nth node from the last element in linked  list
/*
Node* DeleteNthNodefromEnd(Node* head, int N) {
    if (head == NULL) {
        return NULL;
    }
    int cnt = 0;
    Node* temp = head;

    // Count the number of nodes in the linked list
    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }

    // If N equals the total number of
    // nodes, delete the head
    if (cnt == N) {
        Node* newhead = head->next;
        delete (head);
        return newhead;
    }

    // Calculate the position of the node to delete (res)
    int res = cnt - N;
    temp = head;

    // Traverse to the node just before the one to delete
    while (temp != NULL) {
        res--;
        if (res == 0) {
            break;
        }
        temp = temp->next;
    }

    // Delete the Nth node from the end
    Node* delNode = temp->next;
    temp->next = temp->next->next;
    delete (delNode);
    return head;
}
*/ 
// optimal solution 
/*
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* fast=head;
    ListNode* slow =head;
    for(int i=0;i<n;i++)
    {
        fast=fast->next; }

    if(fast==NULL){
        return head->next;
    }
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    ListNode* delNode=slow->next;
    slow->next=slow->next->next;
    delete delNode;
    return head ;
    }
*/