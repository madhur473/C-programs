#include<stdio.h>
int display(int *,int);
int main()
{
	int arr[5]={10,20,30,40,50};
	int i;
	printf("\nsum is %d ",display(&arr,5));//arr , number of inputs in array
}
int display(int *p,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		printf("\n%d",*p);
		sum=sum+*p;
		p++;
	}
	return sum;
}
