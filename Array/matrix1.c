#include<stdio.h>
int main(){
	int mat[3][4]={10,20,30,40,50,60,70,80,90,100,110,120};
					
	int i,j;
	printf("---------------MATRIX---------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%5d",mat[i][j]);
		}
		printf("\n");
	}
}
