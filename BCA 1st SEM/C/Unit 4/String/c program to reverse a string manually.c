#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i, j, len;
	printf("Enter the string ");
	gets(str);
	len=strlen(str);
	for (i=0, j=len-1; i<j; i++, j--)
	{
		str[i]=str[i]+str[j];
		str[j]=str[i]-str[j];
		str[i]=str[i]-str[j];
	}
	printf("After reverse of the string %s",str);
	return 0;
}