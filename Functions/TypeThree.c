#include<stdio.h>
//Without Arugument with Return type
int main()//Calling Function
	{
	int sum;
	sum=adddata();//No Arguements
	printf("Addition is: %d",sum);
//	return 0;
}
	int adddata()	//Here int is returntype
	{
	int n1,n2;
	int add;
	printf("Enter two Numbers:\n");
	scanf("%d%d",&n1,&n2);
	add=n1+n2;
	return add;
	}

