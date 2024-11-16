#include<stdio.h>
int main ()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	if(n>0)
	{
		printf("The Number is Positive Number");
	}
	else if(n<0)
	{
		printf("The Number is Negative NUmber");
	}
	else
	{
		printf("The number is zero");
	}
	return 0;
}