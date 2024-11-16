#include<stdio.h>
#include<math.h>
int main ()
{
	float a, b, c, rp, d, r1, r2;
	printf("Enter the value of a\n");
	scanf("%f", &a);
	printf("Enter the value of b\n");
	scanf("%f", &b);
	printf("Enter the value of c\n");
	scanf("%f", &c);
	rp=sqrt((b*b)-(4*a*c));
	d=2*a;
	if (a==0)
	{
		printf("This is not a quadratic equation");
	}
	else if (rp==0)
	{
		r1=(-b+rp)/d;
		r2=(-b-rp)/d;
		printf("Roots are equal and they are %.1f and %.1f",r1 ,r2);
	}
	else if (rp>0)
	{
		r1=(-b+rp)/d;
		r2=(-b-rp)/d;
		printf("Roots are different and they are %.1f and %.1f",r1 ,r2);
	}
	else
	{
		printf("Roots are imaginory number");
	}
	return 0;
}