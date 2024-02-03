#include<stdio.h>
int main(){
	char cName[10];
	printf("Enter Costumer Name: ");
	scanf("%s",&cName);
	int invoiceNo;
	printf("Enter Invoice Id: ");
	scanf("%d",&invoiceNo);
	int Phno;
	printf("Enter Costumer Phone Number: ");
	scanf("%d",&Phno);
	char pName[20];
	printf("Enter Product Name: ");
	scanf("%s",&pName);
	int productId;
	printf("Enter ProductId: ");
	scanf("%d",&productId);
	int price;
	printf("Enter Product Price: ");
	scanf("%d",&price);
	int quantity;
	printf("Enter Product Quantity: ");
	scanf("%d",&quantity);
	float total=price*quantity;
	
	
	printf("\n----------------Invoice----------------");
	printf("\nName:\t\t%s",cName);
	printf("\nInvoiceId:\t\t%d",invoiceNo);
	printf("\nPhone Number:\t\t%d",Phno);
	printf("\nProduct Id:\t\t%d",productId);
	printf("\nProduct Name:\t\t%s",pName);
	printf("\nProduct Price:\t\t%d",price);
	printf("\nProduct Quantity:\t\t%d",quantity);
	printf("\nTotal:\t\t%.2f",total);
}
