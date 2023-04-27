// Implementation of dequeue        @devottam2809

#include <bits/stdc++.h> 
class Deque
{
public:
    // Initialize your data structure.
    int dq[1000];
    int rear;
    int front;
    int size;
    Deque(int n)
    {
        front=-1;
        rear=-1;
        size=n;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        if(isFull())
        return false;
        if(front==-1)
        {
            front=0;
            rear=0;
        }
        else {
          front = (front - 1 + size) % size;
        }
        dq[front]=x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if(isFull())
        return false;
        if(front==-1)
        {
            front=0;
        }
        rear=(rear+1)%size;
        dq[rear]=x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        int x;
        if(isEmpty())
        return -1;
        x=dq[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        front=(front+1)%size;
        return x;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        int x;
        if(isEmpty())
        return -1;
        x=dq[rear];
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        rear=(rear-1+size)%size;
        return x;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty())
        return -1;
        return dq[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty())
        return -1;
        return dq[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(rear==-1 && front==-1)
        return true;
        return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if((rear+1)%size==front)
        return true;
        return false;
    }
};
