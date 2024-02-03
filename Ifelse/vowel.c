#include<stdio.h>
int main(){
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("\n%c is small vowel",ch);
	}
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("\n%c is Capital vowel",ch);
	}
	if(ch>=65&&ch<=90)
	{
		printf("\n%d is Capital character its ASCII is %d",ch,ch);
	}
	else if(ch>=97&&ch<=122)
	{
		printf("\n%c is Small character its ASCII is %d ",ch,ch);
	}
	else if(ch>=48&&ch<=57)
	{
		printf("\n%c is Number its ASCII is %d",ch,ch);
	}
	else
	{
		printf("\n %c is Other Character its ASCII is %d",ch,ch);
	}
	return 0;
}
