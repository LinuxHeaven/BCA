#include<stdio.h>
int main(){
	float suba, subb, subc, subd, sube;
	float total, average, percentage;
	printf("Enter the marks of five subjects\n");
	scanf("%f%f%f%f%f", &suba, &subb, &subc, &subd, &sube);
	total = suba + subb + subc + subd + sube;
	average = total/5.0;
	percentage = (total/500.0)*100;
	printf("Total marks is = %.2f\n",total);
	printf("Average marks is = %.2f\n",average);
	printf("Percentage of total marks is = %.2f",percentage);
	return 0; 
}