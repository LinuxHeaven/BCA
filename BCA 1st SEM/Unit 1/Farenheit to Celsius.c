#include<stdio.h>
int main(){
	float f, c;
	printf("Enter the Farenheit Value\n");
	scanf("%f",&f);
	c = (f-32)*5/9;
	printf("%.2f Farenheit = %.2f Celsius",f, c);
	return 0;
}