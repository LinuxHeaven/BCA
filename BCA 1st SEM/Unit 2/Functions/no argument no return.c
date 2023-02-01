#include<stdio.h>
void sum();
int main()
{
	sum();
	return 0;
}
void sum()
{
	int s, a, b;
	printf("Enter The two numbers \n");
	scanf("%d %d", &a, &b);
	s=a+b;
	printf("The sum is = %d", s);
}