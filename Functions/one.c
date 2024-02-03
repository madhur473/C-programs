#include<stdio.h>
//Without Arugument without Return type
int main()//Calling Function
	{
		adddata();//Function calling
		subdata();
	}
	void adddata()//Function Defination
	{
	int n1,n2,add;
	printf("Enter two Numbers:\n");
	scanf("%d%d",&n1,&n2);
	add=n1+n2;
	printf("Addition is: %d",add);
}
//void is nothing
	void subdata()//Function Defination
	{
	int n1,n2,sub;
	printf("\nEnter two Numbers:\n");
	scanf("%d%d",&n1,&n2);
	sub=n1-n2;
	printf("Addition is: %d",sub);

	}
