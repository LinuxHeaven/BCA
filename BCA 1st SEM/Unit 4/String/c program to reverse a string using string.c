#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string ");
	gets(str);
	strrev(str); // strrev(<string name>) function used for reverse a string
	printf("After reverse of the string %s",str);
	return 0;
}