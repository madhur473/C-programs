#include<stdio.h>
#define max 20
int main(){
	int r,c,r2,c2;
	printf("Enter Matrix 1 Row and Column:");
	scanf("%d%d",&r,&c);
	printf("Enter Matrix 2 Row and Column:");
	scanf("%d%d",&r2,&c2);
	int mat[r][c];
	int mat2[r2][c2];
	int Addmat[max][max];
	int i,j;
	printf("Enter Matrix 1 :");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%5d",&mat[i][j]);
		}
		printf("\n");
	}
	printf("Enter Matrix 2 :");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%5d",&mat2[i][j]);
		}
		printf("\n");
	}
	printf("---------------MATRIX 1---------------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%5d",mat[i][j]);
		}
		printf("\n");
	}
	printf("---------------MATRIX 2---------------\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%5d",mat2[i][j]);
		}
		printf("\n");
	}
	if((r==r2)&&(c==c2))
	printf("------------------Addition----------------\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
				Addmat[i][j]=(mat[i][j])+(mat2[i][j]);
		}
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
				printf("%5d",Addmat[i][j]);
		}
		printf("\n");
	}
}

