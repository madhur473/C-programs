#include<stdio.h>
int main(){
	char i,j;
	char ch=65;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
		}
		ch++;
		printf("\n");
	}
	ch=66;
	for(i=2;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
		}
		ch++;
		printf("\n");
	}
}

/*

AAAAA
BBBB
CCC
DD
E
BB
CCC
DDDD
EEEEE

*/
