//write a program to calculate commison of a salesman.
//if the sales is greater than or equal 10000 then commision is 10% of sales
//if the sales is greater than or equal 7000 then commision is 5% of sales
//if the sales is greater than or equal 3000 then commision is 2% of sales
//if the sales is less than 3000 then commision is 0% of sales
#include<stdio.h>
int main ()
{
	float sale, com;
	printf("Enter the sales amount \n");
	scanf("%f",&sale);
	if (sale >= 10000)
	{
		com=sale*0.1;
	}
	else if (sale >= 7000)
	{
		com=sale*0.05;
	}
	else if (sale >= 3000)
	{
		com=sale*0.02;
	}
	else
	{
		com=0;
	}
	printf("\n The commision is %.2f",com);
	return 0;
}