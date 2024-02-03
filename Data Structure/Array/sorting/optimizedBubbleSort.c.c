#include<stdio.h>
int main()
{
	int n;
	printf("How many number you want to enter in array: ");
	scanf("%d",&n);
	int arr[n];
	int i,j,k;
	int pass,temp;
	printf("\nEnter element %d numbers in array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//bubble sort code starts
	for(pass=1;pass<n;pass++)//{ pass<n }
	{
		int swapped = 0;
		
		for(j=0;j<n-pass;j++) // {  no of swapping per pass = n-pass }
		{
			if(arr[j]>arr[j+1]) //{ Comparing neighbour elements}
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
				swapped = 1;
			}
		}
		 if (swapped == 0) {
      		break;
    		}
		printf("\npass %d\n\n",pass);//printing numbers after one pass
		for(k=0;k<n;k++)
		{
			printf("%5d",arr[k]);
		}
	}// code ends
	printf("\n\nAfter Bubble sort\n");
	for(i=0;i<n;i++)
	{
		printf("%5d",arr[i]);
	}
}
