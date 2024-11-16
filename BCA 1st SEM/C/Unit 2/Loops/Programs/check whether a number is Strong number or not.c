#include<stdio.h>
int main ()
{
	int i, n, r, c, sum=0;
	printf("Enter the number ");
	scanf("%d",&n);
	c=n;
	while (n!=0)
	{
		r=n%10;
		int fact=1;
		for (i=1;i<=r;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if (c==sum)
	{
		printf("Strong Number");
	}
	else
	{
		printf("Not a strong number");
	}
	return 0;
}