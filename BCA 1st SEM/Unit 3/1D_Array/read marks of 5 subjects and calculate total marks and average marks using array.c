#include<stdio.h>
void marks()
{
	int m[5];
	int avg, sum=0, i;
	printf("Enter the marks of 5 subjects\n");
	for (i=0;i<5;i++)
	{
		scanf("%d",&m[i]);
	}
	for (i=0;i<5;i++)
	{
		sum=sum+m[i];
	}
	avg = sum/5;
	printf("Total marks = %d\n", sum);
    printf("Average marks = %d\n", avg);
}
int main ()
{
	marks();
	printf("Another student marks");
	marks();
	return 0;
}
