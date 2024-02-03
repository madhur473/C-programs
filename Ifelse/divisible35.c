#include<stdio.h>
int main(){
	int n;
	printf("Enter Any Number: ");
	scanf("%d",&n);
	
	if(n%3==0&&n%5==0)
		printf("%d is divisible by 3 and 5",n);
	if(n%3==0&&n%5!=0)
		printf("%d is only divisible by 3",n);
	if(n%5==0&&n%3!=0)
		printf("%d is only divisible by 5",n);
	if(n%3!=0&&n%5!=0)
		printf("%d is not divisible by 3 and 5",n);
}
