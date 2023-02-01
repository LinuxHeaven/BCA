#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the three numbers \n");
	scanf("%d %d %d", &a, &b, &c);
	(a>b&&a>c)?printf("maximum number is %d",a):(b>c&&b>a)?printf("maximum number is %d",b):
	(c>a&&c>b)?printf("maximum number is %d",c):(a==b&&a>c)?printf("a and b equal maximum number is %d",a):
	(b==c&&b>a)?printf("b and c equal maximum number is %d",b):(c==a&&c>b)?printf("c and a equal maximum number is %d",c):
	printf("all are equal");
	return 0;
}