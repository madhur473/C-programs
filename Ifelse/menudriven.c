#include<stdio.h>
int main(){
	
	int ch;
	float r,b,h,ca,ta,ra;
	
		printf("\n1.Area of circle\n2.Area of triangle\n3.Area of Reactangle");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
		{
			printf("Enter radius of circle:");
			scanf("%f",&r);
			ca=3.14*r*r;
			printf("\nArea of circle:%f",ca);
			break;
		}
		case 2:
		{
			printf("Enter base and height:");
			scanf("%f%f",&b,&h);
			ta=0.5*b*h;
			printf("\nArea of Triangle:%f",ta);
			break;
		}
		case 3:
		{
			printf("Enter base and height:");
			scanf("%f%f",&b,&h);
			ra=b*h;
			printf("\nArea of Rectangle:%f",ra);
			break;
		}
		default:
			{
				printf("Invalid ");
			}
		}
		
		return 0;
}
