#include<stdio.h>
int main(){
	int i=2;
	int sum=0;
	while(i<=20){
		printf("\n%d",i);
		sum=i+sum;
		i=i+2;
	}
	printf("\n\nSum of first 10 even number = %d",sum);
}
