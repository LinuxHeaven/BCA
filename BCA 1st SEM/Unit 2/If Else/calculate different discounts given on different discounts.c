//write a progarm to calculate different discounts given on different discounts given on different amount of purchases
//if the purchase is greater than or equal 10000 then discount is 10% of purchase
//if the purchase is greater than or equal 7000 then discount is 5% of purchase
//if the purchase is greater than or equal 3000 then discount is 2% of purchase
//if the purchase is less than 3000 then discount is 0% of purchase
#include<stdio.h>
int main ()
{
	float pur, dis;
	printf("Enter the purchase amount \n");
	scanf("%f",&pur);
	if (pur >= 10000)
	{
		dis=pur*0.1;
	}
	else if (pur >= 7000)
	{
		dis=pur*0.05;
	}
	else if (pur >= 3000)
	{
		dis=pur*0.02;
	}
	else
	{
		dis=0;
	}
	printf("\n The discount of the product is %.2f",dis);
	return 0;
}