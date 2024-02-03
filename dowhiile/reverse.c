#include<stdio.h>
int main(){
	int n;
	int r,rev=0;
	printf("\nEnter any Number");
	scanf("%d",&n);
	do
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	while(n!=0);
	{
		printf("\nReverse of Given is :%d",rev);
	}
}
