#include<stdio.h>
void sum();
int main()
{
	int a, b;
	printf("Enter the two numbers\n");
	scanf("%d %d",&a,&b);
	sum(a,b);
	return 0;
}
void sum(int x, int y)
{
	int s;
	s=x+y;
	printf("The sum is %d",s);
}