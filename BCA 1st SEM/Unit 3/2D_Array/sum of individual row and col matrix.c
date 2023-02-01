#include<stdio.h>
int main ()
{
	int i, j, r, c;
	printf("Enter the rows and columns of the matrix in square matrix\n");
	scanf("%d %d", &r, &c);
	int m[r][c];
	printf("Enter the matrix elements\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
	printf("The matrix elements are\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d\t",m[i][j]);// "\t" is used for tab
		}
		printf("\n");
	}
	for (i=0;i<r;i++)
	{	
		int sumr=0;
		for (j=0;j<c;j++)
		{
			sumr=sumr+m[i][j];
		}
		printf("The sum of the elements of %d row is %d\n",i+1,sumr);
	}
		for (i=0;i<r;i++)
	{	
		int sumc=0;
		for (j=0;j<c;j++)
		{
			sumc=sumc+m[j][i];
		}
		printf("The sum of the elements of %d column is %d\n",i+1,sumc);
	}
	
	return 0;
}