// stack implementation using Linked List @devottam2809

#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node {
    int data;
    struct Node *next;
};

Node* top = NULL;

void push(int value) {
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value; 
    if (top == NULL) {
        newNode->next = NULL;
    } else {
        newNode->next = top; 
    }
    top = newNode;
    cout<<"Data inseted";
}

int pop() {
    if (top == NULL) {
        cout<<"Stack Overflow\n";
    } else {
        struct Node *temp = top;
        int temp_data = top->data;
        top = top->next;
        free(temp);
        return temp_data;
    }
}

void display() {
   
    if (top == NULL) {
        cout<<"Stack Underflow\n";
    } else {
        cout<<"Stack is : \n";
        struct Node *temp = top;
        while (temp->next != NULL) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
}

int main() {
    int choice, value;
    cout<<"\nImplementation of Stack using Linked List\n";
    while (1) {
    	cout<<"\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout<<"Enter the choice = ";
        cin>>choice;
        switch (choice) {
        case 1:
            cout<<"Enter the data = ";
            cin>>value;
            push(value);
            break;
        case 2:
            cout<<"Popped element"<<pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout<<"Wrong Choice\n";
        }
    }
}
