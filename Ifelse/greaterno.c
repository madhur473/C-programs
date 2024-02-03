#include<stdio.h>
int main(){
	int n1,n2;
	printf("Enter first Number: ");
	scanf("%d",&n1);
	printf("Enter Second Number: ");
	scanf("%d",&n2);

	if(n1>n2)
		printf("\n%d is greater number %d",n1,n2);
	else if(n2>n1)
		printf("\n%d is greater number %d",n2,n1);
	else if(n1==n2)
		printf("\nBoth Number are Equal");

}
