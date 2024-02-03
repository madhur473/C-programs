#include<stdio.h>
int main(){
	int rollno,s1,s2,s3;
	float total,per;
	char name[10];
	
	printf("Enter Student Name: ");
	scanf("%s",name);
	
	printf("Enter Student Roll Number: ");
	scanf("%d",&rollno);
	
	printf("Enter marks of Three Subject:\n");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	total=s1+s2+s3;
	per=(total/3)*100;
	printf("\n\t\t --------------Result--------------\n");
	printf("\n\t\t Student Name:\t\t %s",name);
	printf("\n\t\t Roll Number:\t\t %d",rollno);
	printf("\n\t\t Subject 1 marks:\t %d",s1);	
	printf("\n\t\t Subject 2 marks:\t %d",s2);	
	printf("\n\t\t Subject 3 marks:\t %d",s3);
	printf("\n\t\t Total marks:\t\t %d",total);
	printf("\n\t\t Percentage:\t\t %.2f",per);	
	}
