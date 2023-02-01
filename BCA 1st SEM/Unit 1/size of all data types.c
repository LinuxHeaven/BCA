#include<stdio.h>
int main(){
	int a;
	printf("\nint variable size is %d",sizeof(a));
	char b;
	printf("\nchar variable size is %d",sizeof(b));
	float c;
	printf("\nfloat variable size is %d",sizeof(c));
	double d;
	printf("\ndouble variable size is %d",sizeof(d));
	return 0;
}