#include<stdio.h>
int main()
{
	int n, i, sum=0;
	printf("Enter the value ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
			sum=sum+i;
		}
	}
	printf("\nsum = %d",sum);
	return 0;
}