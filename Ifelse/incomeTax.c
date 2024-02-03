#include<stdio.h>
//Up to Rs.3 lakh - 0% (Nil)
//Rs 3 lakh to 6 lakh - 5%
//Rs 6 lakh to 9 lakh - 10%
//Rs 9 lakh to Rs 12 lakh - 15%
//Rs 12 lakh to Rs 15 lakh - 20%
//Above Rs 15 lakh - 30%
int main(){
	
	char name[10],desigination[10],address[20];
	int basic,da,hra,ma,sp,gsalary;
	int Tax,pf,medicalInsurance,Investment,Tsalary,NetSalary,PmSalary,PTax;
	
	printf("Employee Name: ");
	scanf("%s",&name);
	printf("Designation: ");
	scanf("%s",&desigination);
	printf("Address: ");
	scanf("%s",&address);
	
	printf("Enter Basic Salary of Employee: ");
	scanf("%d",&basic);
	
	da=basic*0.10; //Dearness Allowance  
	hra=basic*0.5; //House Rent Allowance 
	ma=basic*0.18;//Medical Allowance
	sp=basic*0.65;//Special Allowance
	gsalary=basic+da+hra+ma+sp;
	
	printf("Enter your Investments per year : \n");
	scanf("%d",&Investment);
	printf("Medical Insurance amount per year : \n");
	scanf("%d",&medicalInsurance);
	pf=basic*0.12;
	Tsalary=(gsalary*12)-(pf*12)-Investment-medicalInsurance;
	
	if(Tsalary<=300000)
	{
		Tax=0;	
	}
	else if(Tsalary>300000&&Tsalary<=600000)
	{
		Tax=(Tsalary-300000)*0.05;
	}
	else if(Tsalary>600000&&Tsalary<=900000)
	{
		Tax=(300000*0.05)+(Tsalary-600000)*0.10;
	}
	else if(Tsalary>900000&&Tsalary<=1200000)
	{
		Tax=(300000*0.05)+(600000*0.10)+(Tsalary-900000)*0.15;
	}
	else if(Tsalary>1200000&&Tsalary<=1500000)
	{
		Tax=(300000*0.05)+(600000*0.10)+(900000*0.15)+(Tsalary-1200000)*0.20;
	}
	else
	{
		Tax=(300000*0.05)+(600000*0.10)+(900000*0.15)+(1200000*0.20)+(Tsalary-1500000)*0.30;
	}
	PTax=Tax/12;
	NetSalary=Tsalary-Tax;
	PmSalary=NetSalary/12;
	medicalInsurance=medicalInsurance/12;
		
	printf("\n\t\t------------------SALARY SLIP OF THIS MONTH------------------\n");
	printf("\n\t\tName:\t\t%s",name);
	printf("\n\t\tDesignation:\t%s",desigination);
	printf("\n\t\tAddress:\t%s",address);
	printf("\n\t\t--------------------EARNINGS-------------------\n");	
	printf("\n\n\t\t-------------------------------------------------\n");	
	printf("\t\t|Srno.\t\tSalaryHead\t\tAmount\t|");
	printf("\n\t\t|1\t\tBasic\t\t\t%d\t|",basic);
	printf("\n\t\t|2\t\tDearness Allowance\t%d\t|",da);
	printf("\n\t\t|3\t\tHouse Rent Allowance\t%d\t|",hra);
	printf("\n\t\t|4\t\tMedical Allowance\t%d\t|",ma);
	printf("\n\t\t|5\t\tSpecial Allowance\t%d\t|",sp);
	printf("\n\t\t|6\t\tGross Salary\t\t%d\t|",Tsalary);
	printf("\n\t\t-------------------------------------------------\n");
	printf("\n\n\t\t--------------------DEDUCTION-------------------\n");
	printf("\n\n\t\t-------------------------------------------------");
	printf("\n\t\t|\t\tPROVIDENT FUND\t\t%d\t|",pf);
	printf("\n\t\t|\t\tInvestments\t\t%d\t|",Investment);
	printf("\n\t\t|\t\tmedicalInsurance\t%d\t|",medicalInsurance);
	printf("\n\t\t|\t\tTDS\t\t%d\t\t|",PTax);
	printf("\n\t\t|\t\tTax\t\t\t%d\t|",Tax);
	printf("\n\t\t|\t\tNet Salary\t\t%d\t|",NetSalary);
	printf("\n\t\t|\t\tMonthly Salary\t\t%d\t|",PmSalary);
	printf("\n\t\t-------------------------------------------------\n");
}
