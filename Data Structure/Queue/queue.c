#include<stdio.h>
#define M 5

int que[M];
int front=0,rear=0;
void  insert_Q(int);
int delete_Q();
void display_Q();

void main()
{
	int ch,data;
	do
	{
		printf("\nMenu");
		printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter data in Queue: ");
				scanf("%d",&data);
				insert_Q(data);
				break;
			case 2:
				data=delete_Q();
				if(data!=1)
				{
					printf("\nThe Deleted data  is %d",data);
				}
				else
				{
					printf("Queue is Empty");
				}
				break;
			case 3:				
				printf("\nList  of no in Queue:\n ");
				display_Q();
				break;
			case 4:
				printf("\n Thank You");
				break;
			
			default:
				printf("\nEnter Correct choice");	
		}
	}while(ch!=4);
}


void insert_Q(int data)
{
	if(rear ==M)
	{
		printf("\n Queue is Full");
		return;
	}
	else
	{
		que[rear]=data;
		rear++;
	}
}

int delete_Q()
{
	int d;
	if(front==rear)
	{
		printf("\n Queue is empty");
		return -1;
	}
	else
	{
		d=que[front];
		front++;
		return d;
	}
}

void display_Q()
{
	int i;
	for(i=front;i<rear;i++)
	{
		printf("%d",que[i]);
	}
}



