// Design Circular Queue  Leetcode 622    @devottam2809

class MyCircularQueue {
public:
    int size;
    int *q;
    int front;
    int rear;
    MyCircularQueue(int k) {
        front = -1;
        rear = -1;
        size = k;  
        q = new int[size];
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        rear = (rear+1)%size;
        q[rear] = value;
        if(front == -1)
            front = 0;
    return true;
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        if(front == rear){
            front = -1;
            rear = -1;
        }else{
            front = (front+1)%size;
        }
    return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
    return q[front];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
    return q[rear];
    }
    
    bool isEmpty() {
        if(front == -1)
            return true;
    return false;
    }
    
    bool isFull() {
        if((rear+1) % size == front)
            return true;
    return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
