#include<stdio.h>
int main()
{
	int c, r, n, arm=0;
	printf("Enter the number ");
	scanf("%d",&n);
	c=n;
	while (n>0)
	{
		r=n%10;
		arm=arm+(r*r*r);
		n=n/10;
	}
	if (c==arm)
	{
		printf("armstrong number");
	}
	else
	{
		printf("Not a armstrong number");
	}
	return 0;
}