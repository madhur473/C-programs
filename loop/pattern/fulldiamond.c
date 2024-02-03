#include<stdio.h>
int main(){
	int i,j,k,s,n;
	n=5;
	s=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)//for space
		{
			printf(" ");
		}
		for(k=1;k<=s;k++)
		{
			printf("*");
		}
		s=s+2;
		printf("\n");
	}
	s=(n*2)-1;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)//for space
		{
			printf(" ");
		}
		for(k=1;k<=s;k++)
		{
			printf("*");
		}
		s=s-2;
		printf("\n");
	}
}
	
	
/*

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
    
    */
