#include<stdio.h>

int main(){
	
	char name[10],desigination[10],address[20];
	int basic,da,hra,ma,sp,salary;
	
	printf("Employee Name: ");
	scanf("%s",name);
	printf("Designation: ");
	scanf("%s",desigination);
	printf("Address: ");
	scanf("%s",address);
	
	printf("Enter Basic Salary of Employee: ");
	scanf("%d",&basic);
	
	da=basic*0.10; //Dearness Allowance  
	hra=basic*0.5; //House Rent Allowance 
	ma=basic*0.18;//Medical Allowance
	sp=basic*0.65;//Specail Allowance
	salary=basic+da+hra+ma+sp;
	
	printf("\n\t\t------------------SALARY SLIP OF THIS MONTH------------------\n");
	printf("\n\t\tName:\t\t%s",name);
	printf("\n\t\tDesignation:\t%s",desigination);
	printf("\n\t\tAddress:\t%s",address);	
	printf("\n\n\n\t\t-------------------------------------------------\n");	
	printf("\t\t|Srno.\t\tSalaryHead\t\tAmount\t|");
	printf("\n\t\t|1\t\tBasic\t\t\t%d\t|",basic);
	printf("\n\t\t|2\t\tDearness Allowance\t%d\t|",da);
	printf("\n\t\t|3\t\tHouse Rent Allowance\t%d\t|",hra);
	printf("\n\t\t|4\t\tMedical Allowance\t%d\t|",ma);
	printf("\n\t\t|5\t\tSpecial Allowance\t%d\t|",sp);
	printf("\n\t\t|6\t\tSalary\t\t\t%d\t|",salary);
	printf("\n\t\t-------------------------------------------------\n");
}
