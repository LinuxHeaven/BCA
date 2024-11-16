#include<stdio.h>
int main ()
{
	int a, b, c;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number\n");
	scanf("%d",&b);
	printf("Enter the third number\n");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("first number is the maximum number");
		}
		else
		{
			printf("third number is the maximum number");
		}
	}
	else if(b>c)
	{
		printf("second number is the maximum number");
	}
	else if(b<c)
	{
		printf("third number is the maximum number");
	}
	else
	{
		printf("all numbers are equal numbers");
	}
	return 0;
}