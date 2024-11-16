#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int len, i, alphabets = 0, digits = 0, others = 0;
	printf("Enter the string ");
	gets(str);
	len=strlen(str);
	for (i=0;i<len;i++)
	{
		if ((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
		{
			alphabets++;
		}
		else if (str[i]>='0'&&str[i]<='9')
		{
			digits++;
		}
		else
		{
			others++;
		}
	}
	printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);
    return 0;
}