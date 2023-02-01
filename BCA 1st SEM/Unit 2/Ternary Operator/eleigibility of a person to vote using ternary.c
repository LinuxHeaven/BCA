#include <stdio.h>
int main ()
{
	int age;
	printf("Enter the age \n");
	scanf("%d",&age);
	(age>=18)?printf("\neligible to vote"):printf("\nnot eligible to vote");
	return 0;
}