#include<stdio.h>
int  main(){
	float h,b,area;
	//taking base
	printf("Enter base of triangle\n");
	scanf("%f",&b);
	//taking height
	printf("Enter height of triangle\n");
	scanf("%f",&h);
	//area of triange
	area=(h*b)/2;
	
	printf("Area of triangle is : %.2f",area);
}
