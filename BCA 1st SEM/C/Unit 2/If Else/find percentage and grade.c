#include<stdio.h>
int main()
{
	float sub1, sub2, sub3, sub4, sub5, total, per;
	printf("Enter the numbers of 5 subjects\n");
	scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
	total = sub1+sub2+sub3+sub4+sub5;
	per = (total/500)*100;
	printf("Percentage = %.2f\n",per);
	if (per>=90)
	{
		printf("Grade A");
	}
	else if (per>=80)
	{
		printf("Grade B");
	}
	else if (per>=70)
	{
		printf("Grade C");
	}
	else if (per>=60)
	{
		printf("Grade D");
	}
	else if (per>=50)
	{
		printf("Grade E");
	}
	else if (per>=40)
	{
		printf("Grade P");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}