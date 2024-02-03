#include<stdio.h>
int main(){
	int n=10;
	int *p=&n;
	printf("\nValue of n is : %d",n);
	printf("\nAddress of n is : %u",&n);
	printf("\n-------------------------------------------------------------");
	printf("\nValue of n using pointer is : %d",*p);
	printf("\nValue address of n using pointer is : %d",p);
	printf("\nValue of p using pointer is : %d",&p);
}
