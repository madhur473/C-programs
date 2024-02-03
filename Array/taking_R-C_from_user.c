#include<stdio.h>
int main(){
	int r,c;
	printf("Enter Matrix Row:");
	scanf("%d",&r);
	printf("Enter Matrix Column:");
	scanf("%d",&c);
	int mat[r][c];
	int i,j;
	printf("Enter Matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%5d",&mat[i][j]);
		}
		printf("\n");
	}
	printf("---------------MATRIX---------------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%5d",mat[i][j]);
		}
		printf("\n");
	}
}

