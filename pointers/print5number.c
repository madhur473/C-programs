#include<stdio.h>
int main(){
	int arr[5];
	int *p=&arr[0];
	int i;
	printf("Enter any five nos is array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",p+i);
	}
	printf("\n------------------------------------------------------------");
	for(i=0;i<5;i++)
	{
		printf("\nAddress:%u Value: %d",p+i,*(p+i));
	}
	printf("\n\nReverse \n");
	for(i=4;i>=0;i--)
	{
		printf("\nAddress:%u Value: %d",p+i,*(p+i));
	}
}
