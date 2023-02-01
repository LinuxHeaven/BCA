#include<stdio.h>
int main(){
	int days, years, weeks;
	printf("Enter the number of day you want to convert\n");
	scanf("%d",&days);
	years = days/365;
	weeks = (days%365)/7;
	days = days - ((years*365)+(weeks*7));
	printf("\n%d years %d weeks %d days",years, weeks, days);
	return 0;
}