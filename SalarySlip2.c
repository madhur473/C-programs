#include<stdio.h>
int main(){
	int empId;
	char empName[10];
	int basicSalary;
	float hra,da,ma,sa,gs;
	
	printf("Enter Employee ID: ");
	scanf("%d",&empId);
	
	printf("Enter employee Name: ");
	scanf("%s",&empName);
	
	printf("Enter Basic Salary: ");
	scanf("%d",&basicSalary);
	
	hra=basicSalary*0.4;
	da=basicSalary*0.1;
	sa=basicSalary*0.5;
	ma=basicSalary*0.1;
	gs=basicSalary+da+gs+hra+ma+sa;
	
	printf("\n\t\t------------------SALARY SLIP OF THIS MONTH------------------\n");
	printf("\n\t\tEmployee Id:\t\t%d",empId);
	printf("\n\t\tName:\t\t\t%s",empName);
	printf("\n\n\n\t\t-------------------------------------------------\n");	
	printf("\t\t|Srno.\t\tSalaryHead\t\tAmount\t|");
	printf("\n\t\t|1\t\tBasic\t\t\t%d\t|",basicSalary);
	printf("\n\t\t|2\t\tDearness Allowance\t%.2f\t|",da);
	printf("\n\t\t|3\t\tHouse Rent Allowance\t%.2f\t|",hra);
	printf("\n\t\t|4\t\tMedical Allowance\t%.2f\t|",ma);
	printf("\n\t\t|5\t\tSpecial Allowance\t%.2f\t|",sa);
	printf("\n\t\t|6\t\tSalary\t\t\t%.2f\t|",gs);
	printf("\n\t\t-------------------------------------------------\n");
}
