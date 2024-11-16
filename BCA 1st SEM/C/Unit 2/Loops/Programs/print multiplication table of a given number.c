#include<stdio.h>
int main()
{
	int i, n, t;
	printf("Enter the number ");
	scanf("%d",&n);
	printf("Enter the table of terms ");
	scanf("%d",&t);
	for (i=1;i<=t;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
	return 0;
}