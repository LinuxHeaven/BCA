#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string ");
	gets(str);
	printf("Uppercase = %s\n",strupr(str));
	printf("Lowercase = %s\n",strlwr(str));
	return 0;
}