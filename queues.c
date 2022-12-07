#include <stdio.h>
#include<stdlib.h>
#define qs 5
int front=-1,rear=-1,queue[qs];

void enqueue(int ele)
{
	if(front==-1&&rear==-1)
	//printf("overflow \n");
	else if(rear==-1 && front==-1)
	{	
		front=0;
		rear=0;
		queue[rear]=ele;
		printf("element enqueued is%d\n",queue[rear]);
	}
	else
	{
		rear=rear+1;
		queue[rear]=ele;
		printf("element enqueued is%d\n",queue[rear]);
	}
}
void dequeue()
{
	if(isempty())
	printf("underflow \n");
	else if(front==rear)
	{
		printf("element deleted is %d\n",queue[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		int ele=queue[front];
		front++;
		printf("element deleted is %d\n",ele);
	}
}
int isempty()
{
	if(front==-1&&rear==-1)
	return 1;
	else
	return 0;
}
int isfull()
{
	if(rear=qs-1)
	return 1;
	else
	return 0;
}
void peek()
{
	if(isempty())
	printf("queue is empty\n");
	else 
	{
	printf("peek element is %d\n",queue[front]);
	}
}
void display()
{
	int i;
	if(isempty())
	printf("underflow \n");
	printf("elements are:");
	for(i=front;i<rear;i++)
	printf("%d",queue[i]);
	printf("\n");
}
void main()
{
	int choice,n;
	printf("1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit");
	while(1)
	{
		printf("enter your choice:\n");
		scanf("%d",&choice);
		switch(choice){
		case 1 : 
		printf("element to be inserted\n");
		scanf("%d",&n);
		enqueue(n);
		break;
		case 2:	
		dequeue();
		break;
		case 3:
		peek();
		break;
		case 4:
		display();
		case 5:
		exit(0);
		break;
}
	}
}
	
	
	
		
		
		
		
