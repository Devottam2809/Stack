// Leetcode 641    Design Circular Deque    @devottam2809

class MyCircularDeque {
public:
queue<int>q1;
queue<int>q2;
int size;
    MyCircularDeque(int k) {
        size=k;
    }
    
    bool insertFront(int value) {
        if(isFull())
            return false;
        while(q1.size()>0){
            q2.push(q1.front());
            q1.pop();
        } 
        q1.push(value);
        while(q2.size()>0){
            q1.push(q2.front());
            q2.pop();
        }
    return true;
    }
    
    bool insertLast(int value) {
        if(isFull())
            return false;
        q1.push(value);
    return true;
    }
    
    bool deleteFront() {
        if(isEmpty())
            return false;;
        q1.pop();
    return true;
    }
    
    bool deleteLast() {
        if(isEmpty())
            return false;
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        while(q2.size()>0){
            q1.push(q2.front());
            q2.pop();
        }
    return true;
    }
    
    int getFront() {
        if(!isEmpty())
            return q1.front();
    return -1;
    }
    
    int getRear() {
        if(!isEmpty()){
            return q1.back();
        }
    return -1;
    }
    
    bool isEmpty() {
        if(q1.size()==0)
            return true;
    return false;
    }
    
    bool isFull() {
        if(q1.size()==size)
            return true;
    return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
