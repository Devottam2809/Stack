#include <stdio.h>

int queue[100],x,n,choice,front=-1,rear=-1;       // required variables
  
void display()                                  // function to display the queue
{
	for(int i=front;i<=rear;i++)                  // printing queue from front to rear
		printf("%d ",queue[i]);	
}

int dequeue()                                 // function to dequeue
{
	int temp;
	if(front==rear)                             // underflow condition
		printf("Underflow\n");
	else{
		temp=queue[front];                      // removal of element from the front of queue
		front++;
	}	
	return temp;                              // return the deleted element
}

void enqueue()                              // function to enqueue
{
	if(rear>=n-1)                            // overflow condition
		printf("Overflow\n");
	else{
		front=0;
		rear++;
		int data;
		printf("Enter the data = ");
		scanf("%d",&data);
		queue[rear]=data;                   // add data to the back queue
	}
}

int main()
{
	printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n\n");
	printf("Enter the number of elements of the queue = ");
	scanf("%d",&n);
	
	do{
		printf("Enter the chocice = ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				enqueue();
				break;
			case 2:
			{
				int temp=dequeue();
				printf("Element removed = %d\n",temp);
				break;
			}
			case 3:
				display();
				break;
			case 4:
				printf("Exit\n");
				break;
		}
	}while(choice!=4);
	
	return 0;
}
