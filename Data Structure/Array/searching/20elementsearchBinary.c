#include<stdio.h>
int main()
{
	int arr[20];
	int i,lb,ub,mid,search,count;
	printf("\nEnter sorted elements for Binary Search in Array: ");
	for(i=0;i<20;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter Element to be Searched: ");
	scanf("%d",&search);
	lb=0;
	ub=20-1;
	int flag=0;
	while(lb<=ub)
	{
	mid=(lb+ub)/2;
	if(arr[mid]==search)
	{
		flag=1;
		printf("\n
		Element Found");
		break;
	}
	else if(arr[mid]>search)
	{
		ub=mid-1;
	}
	else if(arr[mid]<search)
	{
		lb=mid+1;
	}
	count++;
}
	printf("\ntotal number of comprision is %d",count);
	if(flag==0)
	{
		printf("\nElement Not Found");
	}
}
