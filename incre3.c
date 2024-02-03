#include<stdio.h>
int main(){
	int x=1,y=1,a,b;
 	a = x++ + x++ + x++ + x++ + x++;//1+2+3+4+5
 	b = ++y + ++y + ++y + ++y + ++y;//2+3+4+5+6
	printf("\na=%d ",a);
	printf("\nb=%d ",b); 
	printf("\nx=%d ",x);
	printf("\ny=%d ",y); 
 	
}
