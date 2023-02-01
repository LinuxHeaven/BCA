#include<stdio.h>
int main ()
{
	int i, n, c, a=0, b=1;
	printf("Enter the nth term ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("Fibonaci Series are %d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}