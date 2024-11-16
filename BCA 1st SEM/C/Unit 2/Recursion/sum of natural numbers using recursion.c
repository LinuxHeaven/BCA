#include<stdio.h>
int sum(int);
int main ()
{
	int n, x;
	printf("Enter the n term ");
	scanf("%d",&n);
	x=sum(n);
	printf("sum upto n term is = %d",x);
	return 0;
}
int sum(int a)
{
	if (a != 0)
	{
		return a+sum(a-1);
	}
	else
	{
		return a;
	}
}