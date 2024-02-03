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
			printf("* ");
		}
		s=s+1;
		printf("\n");
	}
}


/*

    *
   * *
  * * *
 * * * *
* * * * *

*/	
