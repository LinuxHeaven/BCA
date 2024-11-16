#include<stdio.h>
int main ()
{
	int a, b;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	if(a>b)
	{
		printf("first number is maximum number");
	}
	else if(a<b)
	{
		printf("second number is maximum number");
	}
	else
	{
		printf("both numbers are equal");
	}
	return 0;
}