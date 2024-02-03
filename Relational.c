#include<stdio.h>
int main(){
int x=5,y=4;
	printf("\n%d",x<y);//0
	printf("\n%d",(x>y));//1
	printf("\n%d",x!=y);//1
	printf("\n%d",x==y);//0
	printf("\n%d",!(x==y));//1
	printf("\n%d",!(x!=y));//0
	printf("\n%d",!(!x==!y));//0
}
