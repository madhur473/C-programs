#include<stdio.h>
int main(){
	int arr[10];
	int i;
	int count1=0;
	int count2=0;
	int count3=0;
	int count4=0;
	printf("Enter 10 elements in array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%3==0&&arr[i]%5==0)
		{
		count1++;
		}
		else if(arr[i]%3==0&&arr[i]%5!=0)
		{
			count2++;
		}
		else if(arr[i]%5==0&&arr[i]%3!=0)
		{	
		count3++;
		}
		if(arr[i]%3!=0&&arr[i]%5!=0)
		{
		count4++;
		}
	}
	printf("\ndivisible by 3 and 5 and count is %d",count1);
	printf("\ndivisible by 3 and not 5 and count is %d",count2);
	printf("\ndivisible not by 3 but 5 and count is %d",count3);
	printf("\nnot divisible by 3 and 5 and count is %d",count4);
}

	
	
