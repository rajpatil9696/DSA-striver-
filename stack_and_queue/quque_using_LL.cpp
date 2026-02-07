// in this question we have to implement the queue using Linked list 
/*
void MyQueue:: push(int x)
{
    QueueNode* temp=new QueueNode(x);
    if(rear==NULL){
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
    if (front == nullptr) {
            return -1; // Queue Underflow
        }
        int val = front->data;
        QueueNode* temp = front;
        front = front->next;

        if (front == nullptr) { // If queue becomes empty
            rear = nullptr;
        }

        delete temp; // Free memory
        return val;
}
*/