#include<stdio.h>
int main(){
	int *p;
	int sum;
	int e=0;
	int o=0;
	while(1)//use to go in infinty loop for dynamically allocate the  memory using malloc function
	{
		printf("Enter any number for add to stop enter 0\n");
		p=malloc(sizeof(int));//size will be  allocated as per need
		scanf("%d",p);
		if(*p==0)
		{
			break;
		}
		else if(*p%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
		sum=sum+*p;
	}
	printf("\nNumber of Even Numbers: %d",e);
	printf("\nNumber of Odd numbers: %d ",o);
	printf("\nAdd of n  number is : %d",sum);
	printf("\nfirst number is : %d",*p);
}
