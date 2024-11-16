#include<stdio.h>
int main(){
		int a;
		int b;
		printf("Enter A value\n");
		scanf("%d",&a);
		printf("Enter B value\n");
		scanf("%d",&b);
		printf("equal equal T or F is = %d",a==b);
		printf("\nnot equal T or F is = %d",a!=b);
		printf("\ngreater than T or F is = %d",a>b);
		printf("\nlesser than T or F is = %d",a<b);
		printf("\ngreater than or equal T or F is = %d",a>=b);
		printf("\nlesser than or equal T or F is = %d",a<=b);
		printf("\nlogical and with greater than and less than T or F is = %d",a>b && a<b);
		printf("\nlogical or with greater than and less than T or F is = %d",a>b || a<b);
		printf("\nlogical not with greater than T or F is = %d",!(a>b));
		return 0;
		
}