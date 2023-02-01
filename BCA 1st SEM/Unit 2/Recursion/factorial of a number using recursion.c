#include<stdio.h>
int fact(int);
int main()
{
	int n, f;
	printf("Enter the number ");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial of the number is %d",f);
	return 0;
}
int fact(int a)
{
	int r;
	if (a==0)
	{
		return 1;
	}
	else
	{
		r=fact(a-1)*a;
	}
	return r;
}