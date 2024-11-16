#include<stdio.h>
int main()
{
	double gross, basic, hra, da;
	printf("Enter the basic salary\n");
	scanf("%lf",&basic);
	if (basic<=10000)
	{
		hra=basic*0.2;
		da=basic*0.8;
	}
	else if (basic<=20000)
	{
		hra=basic*0.25;
		da=basic*0.9;
	}
	else
	{
		hra=basic*0.3;
		da=basic*0.95;
	}
	gross=basic+hra+da;
	printf("Gross Salary = %.2lf",gross);
	return 0;
}