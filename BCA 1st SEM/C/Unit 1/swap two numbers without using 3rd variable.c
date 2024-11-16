#include<stdio.h>
int main(){
	int a, b;
	printf("Enter the two numbers\n");
	scanf("%d %d",&a, &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Swaping\n");
	printf("%d\n",a);
	printf("%d",b);
	return 0;
}