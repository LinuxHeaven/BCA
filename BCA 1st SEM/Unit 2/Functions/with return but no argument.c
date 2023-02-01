#include<stdio.h>
int sum();
int main()
{
	int p;
	p=sum();
	printf("The sum is %d", p);
	return 0;
}
int sum()
{
	int s, a, b;
	printf("Enter The two numbers \n");
	scanf("%d %d", &a, &b);
	s=a+b;
	return (s);
}