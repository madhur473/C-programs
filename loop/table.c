#include<stdio.h>
int main(){
	int n,i=1;
	printf("Enter number for its table: ");
	scanf("%d",&n);
	while(i<=10){
		printf("\n %d * %d = %d",n,i,n*i);
		i++;
		
	}
}
