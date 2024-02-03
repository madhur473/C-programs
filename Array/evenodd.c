#include<stdio.h>
int main(){
	int arr[10];
	int i,evenC,oddC;
	int even=0;
	int odd=0;
	printf("Enter 10 elements in array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			even++;
			evenC=evenC+arr[i];
		}
		else
		{
			odd++;
			oddC=oddC+arr[i];
		}
	}
	printf("\neven number= %d",even);
	printf("\neven Addition= %d",evenC);
	printf("\nodd number= %d",odd);
	printf("\nOdd Addition= %d",oddC);
}
	
	
