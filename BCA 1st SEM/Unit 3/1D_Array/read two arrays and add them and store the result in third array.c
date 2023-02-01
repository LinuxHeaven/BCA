#include<stdio.h>
int main()
{
	int a[5], b[5], s[5], i;
	printf("Enter the 5 elements of 1st array\n");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the 5 elements of 2nd array\n");
	for (i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for (i=0;i<5;i++)
	{
		s[i]=a[i]+b[i];
		printf("The sum of the array elements at index %d is %d\n", i, s[i]);
	}
	return 0;
}