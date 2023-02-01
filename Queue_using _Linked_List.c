#include<stdio.h>
#include<stdlib.h>

struct node                                                         // creation of node for queue
{
	int x;
	struct node* next;
};

int node_ch=0;                                                    // variable takes input for choice

struct node *Enqueue(struct node*);

void display(struct node*);

struct node* Dequeue(struct node*);

struct node* getnode();                                           // generated first node for the queue

int main()
{
	printf("Enter 1 to Enqueue\nEnter 2 to Dequeue\nEnter 3 to display\nEnter 4 to exit\n");
	struct node *rear=NULL;
	int ch;
	int c=1;
	while(c)
	{
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			//	printf("hello");
				rear=Enqueue(rear);
			break;
			case 2:
				rear=Dequeue(rear);
			break;
			case 3:
				display(rear);
			break;
			case 4:
				c=0;
			break;
		}	
	}
}
struct node* Dequeue(struct node* rear)
{
	if(rear==NULL)
	{
		printf("The queue is empty: \n");
		return rear;
	}
	else
	{
		printf("The data deleted from the queue is: %d\n",rear->x);
		rear=rear->next;
		return rear;
	}
}
struct node *Enqueue(struct node* rear)
{
	if(node_ch==5)
	{
		printf("The queue is full\n");
		return rear;
	}
	else if(rear==NULL)
	{
		struct node *newnode=getnode();
		rear=newnode;
		return rear;
	}
	else
	{
		struct node *newnode=getnode();
		struct node* current=rear;
		while(current->next!=NULL)
		{
			current=current->next;
		}
		current->next=newnode;
		node_ch++;
		return rear;
	}
	return rear;
}
void display(struct node *rear)
{
	if(rear==NULL)
	{
		printf("The queue is empty: \n");
	}
	else{
	struct node *current=rear;
	printf("The entered data in the queue is: \n");
	while(current!=NULL)
	{
		printf("%d ",current->x);
		current=current->next;
	}
	printf("\n");
}
}
struct node* getnode()
{
	struct node *ptr=(struct node* )malloc(sizeof(struct node));
	printf("Enter the data: ");
	int data;
	scanf("%d",&data);
	ptr->x=data;
	ptr->next=NULL;
	return ptr;
}

