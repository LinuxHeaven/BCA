#include<stdio.h>
int main(){
	int a, b, p;
	printf("Enter the Length of the rectangle\n");
	scanf("%d",&a);
	printf("Enter the width of the rectangle\n");
	scanf("%d",&b);
	p=(2*a)+(2*b);
	printf("The permeter of the rectangle is = %d",p);
	return 0;
}