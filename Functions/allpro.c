#include<stdio.h>
void factor(int);
int factorial(int);
int power(int,int);
int reverse(int);
int fibo();
int prime();
int main()
{
	int ch,c;
	do
	{
	printf("\n1.Factor\n2.Factorial\n3.Power\n4.Reverse\n5.Fibonacci\n6.Prime no");
	printf("\nEnter your choice ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	{
	int n;
	printf("enter a number ");
	scanf("%d",&n);
	factor(n);
	break;
	}
	case 2:
	{
		int f;
		printf("Enter a number for factorial: ");
		scanf("%d",&f);
		printf("factorials are %d",factorial(f));
		break;
	}
	case 3:
	{	
		int n1,p;
		printf("Enter Base and its power respectively");
		scanf("%d%d",&n1,&p);
		printf("power is %d",power(n1,p));
		break;
	}
	case 4:
	{
		int re;
		printf("Enter number you want to reverse: ");
		scanf("%d",&re);
		printf("Reversed number: %d",reverse(re));		
	}
	}
	printf("\nDo you want to continue, Press 1 ");
	scanf("%d",&c);
	}
	while(c==1);
	
}
void factor(int num)
{
	int i;
	printf("Factor of %d is: ",num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d ",i);
		}
	 } 
}
int factorial(int fact)
{
	int i;
	int facto=1;
	for(i=1;i<=fact;i++)
	{
		
		facto=facto*i;
	}
	return facto;
}
int power(int m,int n)
{
	int i;
	int pow=1;
	while(n!=0)
	{
		pow=pow*m;
		--n;
	}
	return pow;
}
int reverse(int r)
{
	int i,rem,rev=0;
	while (r != 0) 
	{
    rem = r % 10;
    rev = rev * 10 + rem;
    r /= 10;
  }
  return rev;

}

