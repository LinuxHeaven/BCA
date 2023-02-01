#include<stdio.h>
int main()
{
	int n, i, factors=0;
	printf("Enter the number ");
	scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		if (n%i==0)
		{
			factors++;
		}
	}
	if (factors==2)
	{
		printf("Prime Number");
	}
	else
	{
		printf("Not a Prime Number");
	}
	return 0;
}