#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("The number is a even number");
	}
	else
	{
		printf("The number is an odd number");
	}
	return 0;
}