#include<stdio.h>
int main(){
	int n1,n2,add;
	int *p1=&n1;
	int *p2=&n2;
	int *p3=&add;
	printf("\nEnter any two nos");
	scanf("\n%d%d",p1,p2);
	*p3=*p1+*p2;
	printf("\nAddition of %d and %d is %d",*p1,*p2,*p3);
}
