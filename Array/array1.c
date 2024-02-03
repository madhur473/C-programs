#include<stdio.h>
int main(){
	int arr[5];
	int i;
	printf("Enter 5 elements in array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nNormal Element: %d",arr[i]);
	}
	for(i=4;i>=0;i--)
	{	
		printf("");
		printf("\nReversed Element: %d",arr[i]);
	}
	
}
