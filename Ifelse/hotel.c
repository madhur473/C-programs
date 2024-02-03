#include<stdio.h>
int main()
{
	int ch,o,c;
	int total=0;
	int cnt=0;
	float cgst,sgst,finaltotal,price=0;
	
	menu:
		printf("\n1:Pizza Mania\n2:Veg Pizza\n3:Non-veg Pizza\n");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		if(ch==1)
		{
			Pizza_Mania:
				printf("------------Pizza Mania-----------");
				printf("\n1: Golden Corn \t:89");
				printf("\n2: Capsicum & Red paprika with Videshi Hot Sauce \t:89");
				printf("\n3: Paneer & Capsicum with Videshi Hot Sauce \t:109");
				printf("\n4: Cheesy \t:109");
				printf("\n5: Chicken Sausage \t:109");
				printf("\n6: Classic \t:49");
				printf("\n7: Tomato \t:59");
				printf("\n8: Onion \t:69");
				printf("\nEnter Order Number\n");
				scanf("%d",&o);
				
				if(o==1)
				{
					total=total+89;
					
				}
				else if(o==2)
				{
					total=total+89;
				}
				else if(o==3)
				{
					total=total+109;
				}
				else if(o==4)
				{
					total=total+109;
				}
				else if(o==5)
				{
					total=total+109;
				}
				else if(o==6)
				{
					total=total+49;
				}
				else if(o==7)
				{
					total=total+59;
				}
				else if(o==8)
				{
					total=total+69;
				}
				else
				{
					printf("\nInvalid Order Number");
				}
				cnt++;
				
				printf("\nDo you want to order Pizza Mania again?,press 1: ");
				scanf("%d",&c);
				if(c==1)
				{
					goto Pizza_Mania;
				}
				printf("\nDo you want to see menu again?press 1: ");
				scanf("%d",&c);
				if(c==1)
				{
					goto menu;
				}
		}
		else if(ch==2)//veg Pizza
		{
			vegPizza:
				printf("-----------Veg Pizza-----------");
				printf("\n1: Margherita \t:109");
				printf("\n2: Blazing onion & Paprika \t:329");
				printf("\n3: Peppy Panner \t:334");
				printf("\n4: Veg Extravaganza \t:299");
				printf("\n5: Cheese n Corn \t:209");
				printf("\n6: Veggie paradise \t:459");
				printf("\nEnter Order Number: ");
				scanf("%d",&o);
				
				if(o==1)
				{
					total=total+109;
				}
				else if(o==2)
				{
					total=total+329;
				}
				else if(o==3)
				{
					total=total+334;
				}
				else if(o==4)
				{
					total=total+299;
				}
				else if(o==5)
				{
					total=total+209;
				}
				else if(o==6)
				{
					total=total+459;
				}
				else
				{
					printf("\nInvalid Order Number");
				}
				cnt++;
				
				printf("\nDo you want to order veg Pizza again?,press 1: ");
				scanf("%d",&ch);
				if(ch==1)
				{
					goto vegPizza;
				}
				printf("\nDo you want to see menu again?press 1: ");
				scanf("%d",&c);
				if(c==1)
				{
					goto menu;
				}
		}
		else if(ch==3)//nonveg Pizza
		{
			nonvegPizza:
				printf("------------ Non-veg Pizza-----------");
				printf("\n1: Pepper barbecue Chicken \t:449");
				printf("\n2: Fiery Sansage & Paprika \t:449");
				printf("\n3: Smoked Chicken Gourment Pizza \t:849");
				
				printf("\nEnter Order Number: ");
				scanf("%d",&o);
				
				if(o==1)
				{
					total=total+449;
				}
				else if(o==2)
				{
					total=total+449;
				}
				else if(o==3)
				{
					total=total+849;
				}
				else
				{
					printf("\nInvalid Order Number");
				}
				cnt++;
				
				printf("\nDo you want to order non-veg Pizza again?,press 1: ");
				scanf("%d",&ch);
				if(ch==1)
				{
					goto nonvegPizza;
				}
				printf("\nDo you want to see menu again?press 1: ");
				scanf("%d",&c);
				if(c==1)
				{
					goto menu;
				}
		}
		else
		{
			printf("\nInvalid Choice");
			goto menu;
		}
		if(cnt>=1)	
		{
			cgst=total*0.06;
			sgst=total*0.06;
			finaltotal=total+cgst+sgst;
			printf("\n\n--------------------------BILL-----------------------");
			printf("\n\n\t\tTotal Items\t\t : %d",cnt);
			printf("\n\t\tTotal Amount\t\t : %d",total);
			printf("\n\t\tCGST\t\t\t : %f",cgst);
			printf("\n\t\tSGST\t\t\t : %f",sgst);
			printf("\n\t\tFinal Amount\t\t : %f",finaltotal);
			
		}
		else
		{
			printf("\nNo Order..");
		}
		printf("\n\n\n----------------THANK YOU..VISIT AGAIN!!-----------------\n\n");
		
	return 0;		
}
