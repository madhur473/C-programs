#include<stdio.h>
//With Arugument without Return type
void adddata(int,int);//function declaration with  prototype
int main()//Calling Function
	{
	int n1,n2;
	printf("Enter two Numbers:\n");
	scanf("%d%d",&n1,&n2);
	adddata(n1,n2);//Arguements
	return 0;
	}
	void adddata(int a, int b)//Call by value	
	{
		int add;
		add=a+b;
		printf("Addition: %d",add);
	}

