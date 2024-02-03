#include<stdio.h>
#define max 20
int main(){
	int set1[max],set2[max],set3[max];
	int i,j,k;
	int l1,l2;
	int flag;
	printf("How many elements do you want to enter in set 1: ");
	scanf("%d",&l1);
	printf("Enter number %d number in array: ",l1);
	for(i=0;i<l1;i++)
	{
		scanf("%d",&set1[i]);
	}
	printf("How many eleents do you want to enter in set 2: ");
	scanf("%d",&l2);
	printf("Enter number %d number in array: ",l2);
	for(i=0;i<l2;i++)
	{
		scanf("%d",&set2[i]);
	}
	//code starts
	k=0;
	for(i=0;i<l1;i++)//putting all set 1 value in set 3
	{
		set3[k]=set1[i];
		k++;
	}
	for(j=0;j<l2;j++)
	{
		flag=1;
		for(i=0;i<l2;i++)
		{
			if(set2[j]==set1[i])
			{
				flag=0;
				break;
			}
		}
			if(flag==1)//if value are not same then add value to set 3
			{
				set3[k]==set2[j];
				k++;
			}		
			printf("Union is %d",set3[k]);
	}
	
}
