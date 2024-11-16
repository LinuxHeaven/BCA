#include<stdio.h>
int main ()
{
	int i, n;
	printf("Enter the Number ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("Factors are %d\n",i);
		}
	}
	return 0;
}