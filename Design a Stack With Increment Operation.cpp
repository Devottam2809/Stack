// Leetcode 1381    Design a Stack With Increment Operation   @devottam2809

class CustomStack {
    stack<int>s1,s2;
    int size;
public:
    CustomStack(int maxSize) {
        this->size=maxSize;
    }
    
    void push(int x) {
        if(s1.size()<size)
            s1.push(x);
    }
    
    int pop() {
        int x;
        if(s1.empty())  return -1;
        x=s1.top();
        s1.pop();
    return x;
    }
    
    void increment(int k, int val) {
        while(s1.size()>k){
            s2.push(s1.top());
            s1.pop();
        }
        while(s1.size()){
            s1.top()+=val;
            s2.push(s1.top());
            s1.pop();
        }
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
