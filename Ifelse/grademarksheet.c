#include<stdio.h>
int main(){
	int rollno,s1,s2,s3,s4,s5;
	float total,per;
	char name[10];
	char grade='\0';//Null is declarted this way inn char!!!
	char result[10];
	printf("Enter Student Name: ");
	scanf("%s",name);
	
	printf("Enter Student Roll Number: ");
	scanf("%d",&rollno);
	
	printf("Enter marks of Three Subject:\n");
	scanf("%d %d %d",&s1,&s2,&s3,&s4,&s5);
	
	total=s1+s2+s3+s4+s5;
	per=(total/5)*100;
	
	if(s1>=40&&s2>=40&&s3>=40&&s4>=40&&s5>=40)
	{
		cpystr(result,"PASS");
		if(per>=40&&per<60)
		{
			grade='C';	
		}
		else if(per>=60&&per<75)
		{
			grade='B';
		}
		else
		{
			grade='A';
		}
	}

	printf("\n\t\t --------------Result--------------\n");
	printf("\n\t\t Student Name:\t\t %s",name);
	printf("\n\t\t Roll Number:\t\t %d",rollno);
	printf("\n\t\t Subject 1 marks:\t %d",s1);	
	printf("\n\t\t Subject 2 marks:\t %d",s2);	
	printf("\n\t\t Subject 3 marks:\t %d",s3);
	printf("\n\t\t Subject 4 marks:\t %d",s4);	
	printf("\n\t\t Subject 5 marks:\t %d",s5);
	printf("\n\t\t Total marks:\t\t %d",total);
	printf("\n\t\t Percentage:\t\t %.2f",per);
	printf("\n\t\t Result:\t %d",result);		
	
	if(grade!='\0')
	{
	printf("\n\t\t Grade:\t %d",grade);
	}
}


