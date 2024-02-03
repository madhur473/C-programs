//xoxo game
//guess the number
#include<stdio.h>
#define max 10
//Rule 1 - col of Matrix1 == Row of Matrix 2
//Rule 2 - Result of Matrix=Row of Matrix1 * Column of Matrix2
//Rule 3 - Assing 0 to each Matrix Index of matrix3=0 orelse it will take anny garbage value
int main()
{
	int mat1=[2][3],mat2=[3][4],mat3[2][4]={0};
	int i,j,k;
	printf("Enter element in matrix1");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%5d",&mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter element in matrix2");
	for(j=0;j<3;j++)
	{
		for(k=0;k<4;k++)
		{
			scanf("%5d",&mat2[j][k]);
		}
		printf("\n");
	}
	printf("Matrix 1");
	
	printf("Enter element in matrix1");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",mat1[i][j]);
		}
		printf("\n");
	}
	printf("Matrix 2");
	for(j=0;j<3;j++)
	{
		for(k=0;k<4;k++)
		{
			printf("%5d",mat2[j][k]);
		}
		printf("\n");
	}
	TO BE CONTINUEDDDDD...
}
