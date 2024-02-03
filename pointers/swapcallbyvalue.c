#include<stdio.h>
//call by value
void swap(int,int);
int main()
{
	int n1,n2;
	printf("Enter two nos.");
	scanf("%d%d",&n1,&n2);
	swap(n1,n2);//Actual parameter
}
void swap(int s1,int s2)//formal parameter
{
	printf("\nBefore swapping %d %d",s1,s2);
	int temp;
	temp=s1;
	s1=s2;
	s2=temp;
	printf("\nSwapped number are %d %d",s1,s2);
}
