#include<stdio.h>
struct Student
{
	int rollNo;
	char sname[10];
	int sub1,sub2,sub3,total;
	float perct;
	struct Student *addr;
}*start,*curr;
int main(){
	int c;
	start=NULL;
	while(1)
	{
		create();
		display();
		printf("\nDo you want to  add next student press 1");
		scanf("%d",&c);
		if(c!=1)
		break;
	}
}
void create()
{
	struct Student *newstud;
	newstud=malloc(sizeof(struct Student));
	newstud->addr=NULL;
	
	printf("\nEnter roll no,name and marks for three subject\n");
	scanf("%d%s%d%d%d",&newstud->rollNo,&newstud->sname,&newstud->sub1,&newstud->sub2,&newstud->sub3);
	newstud->total=newstud->sub1+newstud->sub2+newstud->sub3;
	newstud->perct=(newstud->total)/3;
	if(start==NULL)
	{
		start=newstud;
	}
	else
	{
		curr=start;
		while(curr->addr!=NULL)
		{
			curr=curr->addr;
		}
		curr->addr=newstud;
	}
}

void display()
{
	if(start==NULL)
	{
		printf("Linked List is empty");
	}
	else
	{
		curr=start;
		while(curr!=NULL)
		{
			printf("\nRoll Number : %d",curr->rollNo);
			printf("\nName : %s",curr->sname);
			printf("\nSubject 1 : %d",curr->sub1);
			printf("\nSubject 2 : %d",curr->sub2);
			printf("\nSubject 3 : %d",curr->sub3);
			printf("\nTotal : %d",curr->total);
			printf("\npercentage : %.2f",curr->perct);
			printf("\n-------------------------------------\n");
			curr=curr->addr;
		}
	}
}
