#include<stdio.h>
int main(){
	int x,n;
	int i=1;
	int even=0,odd=0;
	int evensum=0,oddsum=0,sumall=0;
	printf("How many number you want to enter: ");
	scanf("%d",&n);
	while(i<=n){
		printf("\nEnter number: ");
		scanf("%d",&x);
		if(x%2==0){
			even++;
			evensum=evensum+x;
		}
		else
		{
			odd++;
			oddsum=oddsum+x;
		}
		i++;
	}
		
		printf("\nEven Number = %d",even);
		printf("\nOdd Number = %d",odd);
		printf("\nEven Number Sum = %d",evensum);
		printf("\nOdd Number Sum= %d",oddsum);
	}
	
	

