#include<stdio.h>
int sum();
int main()
{
	int r, a, b;
	printf("Enter the two numbers\n");
	scanf("%d %d",&a,&b);
	r=sum(a,b);
	printf("The sum is %d",r);
	return 0;
}
int sum(int x, int y)
{
	int s;
	s=x+y;
	return (s);
}