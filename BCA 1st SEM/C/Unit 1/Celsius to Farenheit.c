#include<stdio.h>
int main(){
	float c, f;
	printf("Enter the Celsius value\n");
	scanf("%f",&c);
	f = (c*9/5)+32;
	printf("\n%.2f Celsius = %.2f Farenheit",c,f);
	return 0;
}