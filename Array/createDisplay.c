#include<stdio.h>
#define max 20
int main(){
	int arr[max];
	int n,ch,i,j,search,c,temp,location,newvalue;
	do
	{
	printf("1-Create\n2-Display\n3-Search\n4-Sorting\n5-Insertion at Selected Location\n6-Delection at selected loation" );
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			printf("Enter number you want in array: ");
			scanf("%d",&n);
			printf("Create array");
			printf("\nEnter any %d number in array: ",n);
			for(i=0;i<n;i++)//to enter number
			{
				scanf("%d",&arr[i]);
			}
			break;
		}
		case 2:
		{
			printf("\nDisplay: ");
			for(i=0;i<n;i++)
			{
				printf("%5d",arr[i]);
			}
			break;
		}	
		case 3:
		{
			printf("\nEnter number tou want to search: ");
			scanf("%d",&search);
			int flag=0;
			for(i=0;i<n;i++) //For checking one by one number
			{
				if(arr[i]==search)
				{
				flag=1;
				break;	
				}
			}
			if(flag==1)
			{
				printf("\nElement found at %d location",(i+1));
			}
			else
			{
				printf("\nElement not found");	
			}
			break;
		}
		case 4:
		{
			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(arr[i]>arr[j])
					{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					}
				}
			}
			printf("\nSorted Elements: ");
			for(i=0;i<n;i++)
			printf("%5d",arr[i]);
			break;
		}
		case 5:
		{
			printf("Enter location and value you want to enter:\n");
			scanf("%d%d",&location,&newvalue);
			for(i=n-1;i>location-1;i--)
			{
				arr[i+1]=arr[i];
			}
				arr[i+1]=newvalue;
				n++;
				printf("Data inserted at selected loaction");
				break;
		}	
	}//Switch ends
	printf("\ndo you want to continue,Press 1: ");
	scanf("%d",&c);
	}while(c==1);
	printf("\n---------------Thank You------------------");
}
	


