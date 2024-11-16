#include<stdio.h>
#include<math.h>//pow function included in this header
int main(){
	double base, expo, power;
	printf("Enter the base\n");
	scanf("%lf",&base);
	printf("Enter the exponent\n");
	scanf("%lf",&expo);
	power = pow(base, expo);//pow function for finding power where pow(base, exponent)
	printf("%.2lf ^ %.2lf = %.2lf",base, expo, power);
	return 0;
} 