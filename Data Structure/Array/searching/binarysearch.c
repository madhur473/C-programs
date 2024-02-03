#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of element you want in Array: ");
	scanf("%d",&n);
	int arr[n];
	int i,lb,ub,mid,search,index;
	printf("\nEnter sorted elements for Binary Search in Array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter Element to be Searched: ");
	scanf("%d",&search);
	lb=0;
	ub=n-1;
	int flag=0;
	while(lb<ub)
	{
	mid=(lb+ub)/2;
	if(arr[mid]==search)
	{
		flag=1;
		printf("Element Found");
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
}
	if(flag==0)
	{
		printf("Element Not Found");
	}
}
