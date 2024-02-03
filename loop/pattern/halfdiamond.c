#include<stdio.h>
int main(){
	int i,j,k,s,n;
	printf("Enter no of lines you want to print: ");
	scanf("%d",&n);
	s=n;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)//for space
		{
			printf(" ");
		}
		for(k=1;k<=s;k++)
		{
			printf("*");
		}
		s=s-1;
		printf("\n");
	}
}

/*

*****
 ****
  ***
   **
    *
    
    */
	
