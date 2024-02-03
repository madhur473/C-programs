#include<stdio.h>
int main(){
	int consumerId;
	char customerName[20];
	int units;
	int total;
	float Totalbill,Finalbill,cgst,sgst;
	
	printf("Enter Consumer Id: ");
	scanf("%d",&consumerId);
	printf("Enter Consumer Name: ");
	scanf("%s",&customerName);
	printf("Enter no of Units: ");
	scanf("%d",&units);
	
	if(units<100)
	{
		total=units*3.33;
	}
	else if(units>=100 && units<300)
	{
		total=100*3.33+(units-100)*5.55;
	}
	else if(units>=300 && units<500)
	{
		total=100*3.33+200*5.55+(units-300)*7.77;
	}
	else
	{
		total=100*3.33+200*5.55+200*7.77+(units-500)*11.11;
	}
	Totalbill=total+500;
	cgst=Totalbill*0.06;
	sgst=Totalbill*0.06;
	Finalbill=Totalbill+cgst+sgst;
	
	printf("\n\n\n\t\t\t------------------INVOICE------------------\n\n\n");
	printf("\n\t\t\t\tConsumer Id:\t\t%d",consumerId);
	printf("\n\t\t\t\tConsumer Name:\t\t%s",customerName);
	printf("\n\t\t\t\tNo of Units:\t\t%d",units);
	printf("\n\t\t\t\tTotal:\t\t\t%.2f",Totalbill);
	printf("\n\t\t\t\tCGST:\t\t\t%.2f",cgst);
	printf("\n\t\t\t\tSGST:\t\t\t%.2f",sgst);
	printf("\n\t\t\t\tBill Amount:\t\t%.2f",Finalbill);
	printf("\n\n\n\n\t\t\t--------------THANK YOU!!!!!--------------\n\n\n");
}
