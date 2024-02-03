#include<stdio.h>
int main()
{
	int n;
	printf("How many number you want to enter in array: ");
	scanf("%d",&n);
	int arr[n];
	int i,search, index;
	int flag=0;
	printf("\nEnter element %d numbers in array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter element you want to search: ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{	
		if(arr[i]==search)
		{
			index=i+1;
			flag=1;
			break;
		}
	}
		if(flag==1)
		{
			printf("\nElement Found at %d position",index);
		}
		else
		{
			printf("\nElement not Found");
		}
	}

	
