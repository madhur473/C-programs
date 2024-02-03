#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("Enter first Number: ");
	scanf("%d",&n1);
	printf("Enter Second Number: ");
	scanf("%d",&n2);
	printf("Enter Third Number: ");
	scanf("%d",&n3);

	if(n1>n2&&n1>n3)
		printf("\n%d is greater number",n1);
	else if(n2>n1&&n2>n3)
		printf("\n%d is greater number",n2);
	else if((n1==n2)||(n2==n1)&&(n1>n3))
		printf("\n%d and %d is equal and %d is greater than %d",n1,n2,n1,n3);
	else if((n1==n2)||(n2==n1)&&(n1<n3))
		printf("\n%d and %d is equal and %d is greater than %d",n1,n2,n3,n1);
	else if((n2==n3)||(n3==n2)&&(n2>n1))
		printf("\n%d and %d is equal and %d is greater than %d",n2,n3,n2,n1);
	else if((n2==n3)||(n3==n2)&&n2<n1)
		printf("\n%d and %d is equal and %d is greater than %d",n2,n3,n1,n2);
	else if((n3==n1)||(n1==n3)&&(n3>n2))
		printf("\n%d and %d is equal and %d is greater than %d",n3,n1,n3,n2);
	else if((n3==n1)||(n1==n3)&&n3<n2)
		printf("\n%d and %d is equal and %d is greater than %d",n3,n1,n2,n3);
	else if(n1==n2&&n1==n3&&n2==n3)
		printf("\nAll Number are Equal");
	else
		printf("\n%d is greater number",n3);
}
