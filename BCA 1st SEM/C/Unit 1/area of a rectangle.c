#include<stdio.h>
int main(){
	int a, b, area;
	printf("Enter the Length of the Rectangle\n");
	scanf("%d",&a);
	printf("Enter the Width of the Rectangle\n");
	scanf("%d",&b);
	area = a*b;
	printf("Area of the Rectangle is = %d",area);
	return 0;
}