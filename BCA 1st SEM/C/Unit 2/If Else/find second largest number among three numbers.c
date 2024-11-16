#include<stdio.h>
int main ()
{
	int a, b, c;
	printf("Enter the three numbers\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b&&a>c)
	{
		if (b>=c)
		{
			printf("\nsecond largest no is %d",b);
		}
		else
		{
			printf("\nsecond largest no is %d",c);
		}
	}
	else if (b>a&&b>c)
	{
		if (a>=c)
		{
			printf("\nsecond largest no is %d",a);
		}
		else
		{
			printf("\nsecond largest no is %d",c);
		}
	}
	else
	{
		if (a>=b)
		{
			printf("\nsecond largest no is %d",a);
		}
		else
		{
			printf("\nsecond largest no is %d",b);
		}
	}
	return 0;
	
}