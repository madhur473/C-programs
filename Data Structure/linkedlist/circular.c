#include<stdio.h>

struct Node
{
	int data;
	struct Node *addr;
 } *last;
	 
int main(){
	int n,c;
	last=NULL;
	do
	{
		printf("Enter any number");
		scanf("%d",&n);
		create(n);
		display();
		printf("Do you want to continue Again, Press 1");
		scanf("%d",&c);
	}while(c==1);
}
void create(int n)
{
	struct Node *newnode;
	newnode = malloc(sizeof(struct Node));
	newnode->data=n;
	if(last==NULL)
	{
		last=newnode;
		last->addr=last;
	}
	else
	{
		newnode->addr=last->addr;
		last->addr=newnode;
		last=newnode;
	}
}

//add a node at start 
//newnode->addr =last->addr;
//last->addr=newnode;

Delete first node
//struct Node *curr;
//curr=last->addr;
//last->addr=curr->addr;
//free(curr);

//insert node between two node in CLL
//DELETE NODE BETWEEN TWO NODES
struct Node *curr,*prev;

void display()
{
	struct Node *curr;
	if(last==NULL)
	{
		printf("Circular Linked List is empty");
	}
	else
	{
		curr=last->addr;
		while(curr!=last)
		{
			printf("| %d | %u | -->",curr->data,curr->addr);
			curr=curr->addr;
		}
			printf("| %d | %u | -->",curr->data,curr->addr);
	}

}
