#include<stdio.h>

int main(){
	int lamount,time;
	float lintrest;
	
	printf("Enter Loan Amount: ");
	scanf("%d",&lamount);
	
	printf("Enter Loan Intrest: ");
	scanf("%f",&lintrest);
	
	printf("Enter No of Year: ");
	scanf("%d",&time);
	
	float intrestamount=(lamount*time*lintrest)/100;
	float totalpayable=lamount+intrestamount;
	float payablepm=totalpayable/(time*12);
	printf("\n\t\t----------------EMI CALCULATOR-------------------");
	printf("\n\t\tLoan Amount: %d",lamount);
	printf("\n\t\tLoan Intrest: %.2f",lintrest);
	printf("\n\t\tNo of Year: %d Years",time);
	printf("\n\t\tTotal Intrest : %.2f",intrestamount);
	printf("\n\t\tTotal Payable Amount : %.2f",totalpayable);
	printf("\n\t\tPayable Per Month Amount : %.2f",payablepm);
}
