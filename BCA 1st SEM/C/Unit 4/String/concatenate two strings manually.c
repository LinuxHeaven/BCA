#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30];
	char str2[30];
	int i, len1, len2;
	printf("Enter the first string ");
	gets(str1);
	printf("Enter the second string ");
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	for(i=0;i<=len2;i++)// '\0' string is stored at last
	{
		str1[len1+i]=str2[i];
	}
	printf("After Concatenation of string = %s",str1);
}