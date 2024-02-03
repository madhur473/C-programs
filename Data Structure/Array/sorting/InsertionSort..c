#include<stdio.h>
int main()
{
	int n;
	printf("How many number you want to enter in array: ");
	scanf("%d",&n);
	int arr[n];
	int i,j,k,min;
	int pass,temp;
	printf("\nEnter element %d numbers in array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
			if(j==-1)
			{
				break;
			}
		}
		arr[j+1]=temp;
		printf("\npass %d\n\n",i);//printing numbers after one pass
		for(k=0;k<n;k++)
		{
			printf("%5d",arr[k]);
		}
}

	printf("\n\n---------------------------------------------------------\nAfter sort\n");
	for(i=0;i<n;i++)
	{
		printf("%5d",arr[i]);
	}
}
