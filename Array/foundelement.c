#include<stdio.h>
#define max 20
int main(){
	int arr[max];
	int i,n,search;
	printf("Enter number you want to enter in array: ");
	scanf("%d",&n);
	printf("\nEnter any %d number in array: ",n);
	for(i=0;i<n;i++)//to enter number
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter number tou want to search: ");
	scanf("%d",&search);
	int a=0;
	for(i=0;i<n;i++) //For checking one by one number
	{
		if(arr[i]==search)
		{
		a=1;
		break;	
		}
	}
	if(a==1)
	{
		printf("\nElement found at %d location: ",(i+1));
	}
	else
	{
		printf("\nElement not found");	
	}
}

	
	
	

