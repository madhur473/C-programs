#include<stdio.h>
int main(){
	int i,j,k,s,n,p,q,r;
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
		for(p=1;p<=3;p++)
		{
			for(q=1;q<=3;q++)
			{
				printf(" ");
			}
			for(r=1;r<=3;r++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	
}

/*
    *
   ***
   ***
   ***
   ***
   ***
   ***
   ***
  *****
   ***
   ***
   ***
 *******
   ***
   ***
   ***
*********
   ***
   ***
   ***

*/
	
