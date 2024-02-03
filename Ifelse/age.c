#include<stdio.h>
int main(){
	int age;
	printf("Enter Your age: ");
	scanf("%d",&age);
	
	if (age<0)
	{
		age=-age;
	}
	printf("\nYour age is %d",age);
}
