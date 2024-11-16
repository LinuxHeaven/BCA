#include<stdio.h>
int main ()
{
	int y;
	printf("Enter the year\n");
	scanf("%d",&y);
	if ( y%4==0 && y%100!=0 )
	{
		printf("Leap Year using y/4 rule");
	}
	else if ( y%400==0 )
	{
		printf("Leap year using y/400 rule");
	}
	else
	{
		printf("Common Year");
	}
	return 0;	
}