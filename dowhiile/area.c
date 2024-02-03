#include<stdio.h>
int main(){
	int ch,c;
	float r,b,h,ca,ta;
	do
	{
		printf("\n1.Area of Circle\n2.Area of Triangle");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{	
			case 1:
				printf("\nEnter radius of circle");
				scanf("%f",&r);
				ca=3.14*r*r;
				printf("\nArea of Circle is :%f",ca);
				break;
			case 2:
				printf("\nEnter Height and Weight");
				scanf("%f%f",&h,&b);
				ta=0.5*b*h;
				printf("\nArea of Triangle: %f",ta);
				break;
			}
			printf("\nDo you want to continue ,Press 1");
			scanf("\n%d",&c);
		}
		while(c==1);
		return 0;
		}
	
