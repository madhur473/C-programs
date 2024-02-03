#include<stdio.h>
int main(){
	int input,result;
	int c,c1,c2;
	
	menu:
		printf("Enter Ypur Choice: ");
		printf("\n1.Rupees\n2.Dollar\n3.Euro\n");
		scanf("%d",&c1);
		
	if(c1==1)
	{
		printf("\nEnter the amount in Rupees: ");
		scanf("%d",&input);
		printf("\nSelect the currency you want to convert: ");
		printf("\n1.Rupee\n2.Dollar\n3.Euro\n");
		scanf("%d",&c2);
		
		if(c2==1)
		{
			printf("\nNo Conversion");
		}
		if(c2==2)
		{
			result=input/82;
			printf("\n%d INR to %d Dollar",input,result);
		}
		if(c2==3)
		{
			result=input/90;
			printf("\n%d INR to %d Euro",input,result);
		}
	}
	
	if(c1==2)
	{
		printf("\nEnter the amount in Dollar: ");
		scanf("%d",&input);
		printf("\nSelect the currency you want to convert: ");
		printf("\n1.Rupee\n2.Dollar\n3.Euro\n");
		scanf("%d",&c2);
		
		if(c2==1)
		{
			result=input*82;
			printf("\n%d Dollar to %d INR",input,result);
		}
		if(c2==2)
		{
			printf("\nNo Conversion");
		}
		
		if(c2==3)
		{
			result=input*0.91;
			printf("\n%d Dollar to %d Euro",input,result);
		}
	}
	if(c1==3)
	{
		printf("\nEnter the amount in Dollar: ");
		scanf("%d",&input);
		printf("\nSelect the currency you want to convert: ");
		printf("\n1.Rupee\n2.Dollar\n3.Euro\n");
		scanf("%d",&c2);
		
		if(c2==1)
		{
			result=input*90;
			printf("\n%d Euro to %d INR",input,result);
		}
		if(c2==2)
		{
			result=input*1.10;
			printf("\n%d Euro to %d Dollar",input,result);
		}
		
		if(c2==3)
		{
			printf("\nNo Conversion");
		}
	}
	printf("\nDo You Want To Convert Again:\n");
	scanf("%d",&c);
	if(c==1)
	{
		goto menu;
	}
}
