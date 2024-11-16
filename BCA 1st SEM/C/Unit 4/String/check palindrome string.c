#include<stdio.h>
#include<string.h>
int main ()
{
	char str[100];
	int i, len;
	int flag=1; // 1 is for true in C
	printf ("Enter the tring = ");
	gets(str);
	len=strlen(str); // strlen(<string name>) function for finding string length this is under string.h library
	for (i=0;i<len;i++)
	{
		if (str[i]!=str[len-i-1])
		{
			flag=0; // not palindrome 0 = false in C
			break; // for stopping the loop 
		}
	}
	if (flag) // flag initialized as 1 and no condition only var means only value in c, 1=T and 0=F and if(1)=if(true)
	{
		printf("Palindrome string");
	}
	else // (0)=false
	{
		printf("Not Palindrome");
	}
	return 0;
}