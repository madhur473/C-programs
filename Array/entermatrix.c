#include<stdio.h>
int main(){
	int mat[3][3];
					
	int i,j;
	printf("Enter Matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%5d",&mat[i][j]);
		}
		printf("\n");
	}
	printf("---------------MATRIX---------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",mat[i][j]);
		}
		printf("\n");
	}
}

