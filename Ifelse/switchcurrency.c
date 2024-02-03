#include<stdio.h>
int main(){
	int input,result;
	int c,c1,c2;
	
	menu:
		printf("Enter Ypur Choice: ");
		printf("\n1.Rupees\n2.Dollar\n3.Euro\n");
		scanf("%d",&c1);
		
	switch(c1)
	{
	
	case 1:
		Rupees:
		printf("\nEnter the amount in Rupees: ");
		scanf("%d",&input);
		printf("\nSelect the currency you want to convert: ");
		printf("\n1.Rupee\n2.Dollar\n3.Euro\n");
		scanf("%d",&c2);
		
		switch(c2)
		{
			case 1:
			printf("\nNo Conversion");
			break;
			case 2:
			result=input/82;
			printf("\n%d INR to %d Dollar",input,result);
			break;
			case 3:
			result=input/90;
			printf("\n%d INR to %d Euro",input,result);
			break;
		}
		printf("\nDo you want to convert Rupees again? press 1");
		scanf("%d",&c);
		if(c==1)
		{
		goto Rupees;
		}
		break;
	case 2:
		Dollar:
		printf("\nEnter the amount in Dollar: ");
		scanf("%d",&input);
		printf("\nSelect the currency you want to convert: ");
		printf("\n1.Rupee\n2.Dollar\n3.Euro\n");
		scanf("%d",&c2);
		
		switch(c2)
		{
		case 1:
			result=input*82;
			printf("\n%d Dollar to %d INR",input,result);
			break;
		case 2:
			printf("\nNo Conversion");
			break;
		case 3:
			result=input*0.91;
			printf("\n%d Dollar to %d Euro",input,result);
			break;
		}
		printf("\nDo you want to convert Dollar again? press 1");
		scanf("%d",&c);
		if(c==1)
		{
		goto Dollar;
		}
		break;
	case 3:
		Euro:
		printf("\nEnter the amount in Euros: ");
		scanf("%d",&input);
		printf("\nSelect the currency you want to convert: ");
		printf("\n1.Rupee\n2.Dollar\n3.Euro\n");
		scanf("%d",&c2);
		
		switch(c2)
		{
		case 1:
		result=input*90;
		printf("\n%d Euro to %d INR",input,result);
		break;
		case 2:
		result=input*1.10;
		printf("\n%d Euro to %d Dollar",input,result);
		break;
		case 3:
			printf("\nNo Conversion");
			break;
		}
		printf("\nDo you want to convert Euro again? press 1");
		scanf("%d",&c);
		if(c==1)
		{
		goto Euro;
		}
		break;
	}
	printf("\nDo You Want To Convert Again:\n");
	scanf("%d",&c);
	if(c==1)
	{
		goto menu;
	}
}
