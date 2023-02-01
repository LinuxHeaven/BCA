#include<stdio.h>
int main(){
	int a, b, temp;
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("After Swaping\n");
	printf("%d\n",a);
	printf("%d",b);
	return 0;
}