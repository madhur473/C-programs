#include<stdio.h>
void create(int);
void display();
void insertFirstNode(int);
void insertMiddleNode(int,int);
void deleteFirstNode();
void deleteMiddleNode();

struct Node
{
	int data;
	struct Node *addr;
}*start,*curr;

int main(){
	int n,c,ch,loc;
	start=NULL;
	
	do
	{
		printf("Enter your choice:\n1.Create\n2.Display\n3.InsertFirstNode\n4.InsertMiddleNode\n5.DeleteFirstNode\n6.DeleteMiddleNode");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n\n Enter any new value to insert in linked list");
				scanf("%d",&n);
				create(n);	
				break;
			case 2:
				display();
				break;
			case 3:
				printf("Enter element you want to enter:");
				scanf("%d",&n);
				insertFirstNode(n);
				break;
			case 4:
				printf("Enter element you want to enter and location:");
				scanf("%d%d",&n,&loc);
				insertMiddleNode(n,loc);
				break;
			case 5:
				deleteFirstNode();	
				break;
			case 6:
				printf("Enter location you want to delete");
				scanf("%d",&loc);
				deleteMiddleNode(loc);
				break;
		}
		
		
		printf("\n\n Do you want to add next node press 1");
		scanf("%d",&c);
	}while(c==1);
}
void create(int n)
{
	struct Node *newnode;
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=NULL;
	if(start==NULL)
	{
		start=newnode;
	}
	else
	{
		curr=start;
		while(curr->addr!=NULL)
		{
			curr=curr->addr;
		}
		curr->addr=newnode;
	}
}
void display()
{
	if(start==NULL)
	{
		printf("\nLinked List is empty");
	}
	else
	{
		curr=start;
		while(curr!=NULL)
		{
			printf("| %d | %u | -> ",curr->data,curr->addr);
			curr=curr->addr;
		}
	}
}
void insertFirstNode(int n)
{
	struct Node *newnode;
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	newnode->addr=start;
	start=newnode;
}
void insertMiddleNode(int n, int loc)
{
	struct Node *newnode;
	int cnt;
	newnode=malloc(sizeof(struct Node));
	newnode->data=n;
	curr=start;
	cnt=1;
	while(cnt<loc-1)
	{
		curr=curr->addr;
		cnt++;
	}
	newnode->addr=curr->addr;
	curr->addr=newnode;
	printf("New node is inserted between two node Inlist");
}
void deleteFirstNode()
{
	curr=start;
	start=start->addr;
	curr->addr=NULL;
	free(curr);
}
void deleteMiddleNode(int loc)
{
	int cnt;
	struct Node *next;
	curr=start;
	cnt=1;
	while(cnt<loc-1)
	{
		curr=curr->addr;
		cnt++;
	}
	next=curr->addr;
	curr->addr=next->addr;
	free(next);
	printf("\nNode deleted");
}

