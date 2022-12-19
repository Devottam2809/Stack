// Menu driven stack operations @devottam2809

#include<iostream>
#include <stdlib.h>

int stack[100],choice,n,top,x,i;                        // global declaration of required Identifiers

void push(void);                                        // function that pushes the element to the stack

void pop(void);                                         // function that removes the element from the stack

void display(void);                                     // function displays the stack elements

int main()
{
    top=-1;                                             // top = 1 shows that there are no elements in the stack
    cout<<"Enter the size of stack ";
    cin>>n;
    cout<<"Stack operations using array :\n";
    cout<<"\n1. PUSH\n2. POP\n3. DISPLAY\n4.EXIT";
    do
    {
        cout<<"Enter the choice = ";
        cin>>choice;
      
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                cout<<"Exit\n";
                break;
            }
            default:
            {
                cout<<"Please enter a valid choice";
            }
                
        }
    }
    while(choice!=4);
    return 0;
}

void push()
{
    if(top>=n-1)                                                  // check the overflow condition
        cout<<"Stack Overflow";
    else
    {
        cout<<"Enter the value to be pushed = ";
    	cin>>x;
        top++;                                                    // increment the top position
        stack[top]=x;                                             // add element to the top position
    }
}

void pop()
{
    if(top<=-1)                                                   // check the underflow condition
        cout<<"Stack Underflow";
    else
    {
        cout<<"The popped element is = "<<stack[top];
        top--;                                                    // decrement the top counter
    }
}

void display()
{
    if(top>=0)
    {
        cout<<"The elements of the stack are : \n";
        for(i=top; i>=0; i--)
            cout<<stack[i]<<" ";
        cout<<"\n Press Next Choice";
    }
    else
        cout<<"\nThe stack is empty";
}
