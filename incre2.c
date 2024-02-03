#include<stdio.h>
int main(){
	int x=5,y=3,z=4,a;
 	a = x++ + --y + z--;
	printf("\na=%d ",a);
	printf("\nx=%d ",x);
	printf("\ny=%d ",y); 
 	printf("\nz=%d ",z); 
}
