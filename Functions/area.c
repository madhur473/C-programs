#include<stdio.h>
void areacircle(float);
float areatriangle();
float areareact(float,float);
int main()
{
	int ch,c;
	do
	{
	printf("\n1.Area of circle\n2.Area of Triangle\n3.Area of reactangle");
	printf("\nEnter your choice ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	{
	float radius;
	printf("\nEnter Radius");
	scanf("%f",&radius);
	areacircle(radius);	
	break;
	}
	case 2:
	{
		printf("\nArea of tirangle= %f",areatriangle());
		break;
	}
	case 3:
	{	
	float length,breadth,area;
	printf("Enter Lenght and breadth of triangle");
	scanf("%f%f",&length,&breadth);
	area=areareact(length,breadth);
	printf("Area of rectangle %f",areareact(length,breadth));
	break;
	}
	}
	printf("\nDo you want to continue, Press 1 ");
	scanf("%d",&c);
	}
	while(c==1);
	
}
void areacircle(float r)
{
	float area;
	area=3.14*r*r;
	printf("\nArea of circle is %.2f",area);
}
float areatriangle()
{
	float h,b,area;
	printf("\nEnter base of triangle\n");
	scanf("%f",&b);
	printf("\nEnter height of triangle\n");
	scanf("%f",&h);
	area=(h*b)/2;
	return area;
}
float areareact(float l,float b)
{
	float area;
	area=2*(l+b);
	return area;
}

