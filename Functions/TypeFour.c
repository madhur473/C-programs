#include<stdio.h>
int adddata(int,int);
//With Arugument with Return type
int main()//Calling Function
	{
	int sum;
	int n1,n2;
	int add;
	printf("Enter two Numbers:\n");
	scanf("%d%d",&n1,&n2);
	sum=adddata(n1,n2);// Arguements
	printf("Addition is: %d",sum);
	return 0;    
	}
	int adddata(int a,int b){	//Here int is returntype
	{
	int add;
	add=a+b;
	return add;
	}
}
