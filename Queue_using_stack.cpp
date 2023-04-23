// Leetcode 232     @devottam2809

class MyQueue {
public:
    int arr[200];
        int front=0;
        int rear=0;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(isfull())
            return ;
        arr[rear]=x;
        rear++;
    }
    
    int pop() {
        if(empty())
            return -1;
        int d=arr[front];
        front++;
    return d;
    }
    
    int peek() {
        return arr[front];
    }
    
    bool empty() {
        if(front == rear)
        {   front=0;rear=0; 
            return true;}
    return false;
    }
    bool isfull(){
        if(rear==200)
            return true;
    return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
