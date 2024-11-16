#include<stdio.h>
int main()
{
	int a, b;
	char m;
	printf("Enter the problem\n");
	scanf("%d %c %d", &a, &m, &b);
	switch(m)
	{
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("divison = %d , reminder = %d",a/b,a%b);
			break;
		default:
			printf("Invalid Input");
	}
	return 0;
	
}