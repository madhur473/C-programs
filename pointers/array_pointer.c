#include<stdio.h>
int main(){
	int arr[5]={10,20,30,40,50};
	int *p;
	int i;
	p=&arr[0];
	printf("\nFirst  address is : %u and Value is : %d ",p,*p);
	printf("\nSecond address is : %u and Value is : %d ",p+1,*(p+1));
	printf("\nThird  address is : %u and Value is : %d ",p+2,*(p+2));
	printf("\nFourth address is : %u and Value is : %d ",p+3,*(p+3));
	printf("\nFifth  address is : %u and Value is : %d ",p+4,*(p+4));
	printf("\nUsing for loop");
	for(i=0;i<5;i++)
	{
		printf("\n%u : %d",p+i,*(p+i));
	}
}
