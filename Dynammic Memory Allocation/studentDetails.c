#include<stdio.h>

struct  Student
{
	int rno;
	char sname[10];
	float per;
}*stud;//global variable=> Can use anywhere in file

void create();
void display();

void main(){
	int ch;
	do
	{
		create();
		display();
		printf("\n\nDo you want to continue press 1 ");
		scanf("%d",&ch);	
	}while(ch==1);
}

void create()
{
	stud=(struct Student*)malloc(sizeof(struct Student));
	printf("\n\nSize per Student in heap memory inbyte (Internal Details): %d",sizeof(*stud));
	printf("\n\nEnter Student name, Rollno, Percentage\n");
	scanf("%s%d%f",&stud->sname,&stud->rno,&stud->per);
}

void display()
{
	printf("\nStudent Name\t\tRoll no\t\tPercentage");
	printf("\n%s\t\t\t%d\t\t%f",stud->sname,stud->rno,stud->per);
}


