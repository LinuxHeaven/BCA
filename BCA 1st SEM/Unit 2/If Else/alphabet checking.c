#include<stdio.h>
int main ()
{
	char ch;
	printf("Enter the character\n");
	scanf("%c",&ch);
	if (ch>='a'&&ch<='z')
	{
		printf("Small Alphabet");
	}
	else if (ch>='A'&&ch<='Z')
	{
		printf("Capital Alphabet");
	}
	else
	{
		printf("Not an Alphabet");
	}
}