#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	char str2[100];
	printf("Enter the first string ");
	gets(str1);
	printf("Enter the second string ");
	gets(str2);
	strcat(str1,str2); // strcat(<string1>,<string2>) concatenate two strings string 1 = string 1 + string 2
	printf("After Concatenation of string = %s",str1);
}