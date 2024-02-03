#include<stdio.h>
#define SIZE 5

int main()
{
	int stack[SIZE],top=-1,elt,choice,i;
	do
	{
		printf("\n\n\n***MENU***\n");
		printf("\n1 - Push");
		printf("\n2 - Pop");
		printf("\n3 - Display");
		printf("\n0 - Exit");
		
		printf("\n\nPlease enter your choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\nEnter element to be pushed: ");
				scanf("%d",&elt);
				if(top == SIZE-1)
				{
					printf("\nStack Full");
				}
				else
				{
					stack[++top] = elt;
					printf("%d Pushed.. ",elt);
				}
			break;
			case 2:
				if(top == -1)
				{
					printf("\n Stack  is Empty!");
				}
				else
				{
					printf("\n%d popped..",stack[top]);
					stack[top]=0;
					top--;
				}
			break;
			case 3:
				i=top;
				printf("\nStack : ");
				while(i!=-1)
				{
					printf("%d\t",stack[i]);
					i--;
				}
			break;
			case 0:
				printf("\nThank you");
			break;
			default:
			printf("\nPlease enter correct choice");
		}
	}while(choice!=0);
	return 0;
}
