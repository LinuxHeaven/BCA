#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ 
	FILE *fp;
	int vowel=0;
	int digit=0;
	int other=0;
	char ch;
	fp=fopen("welcome.txt","r");
	if (fp==NULL)
	{
		perror("File Not Found");
		exit(1);
	}
	else
	{
		ch=fgetc(fp);
		while(ch!=EOF)
		{
			printf("%c",ch);
			if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			{
				vowel++;
			}
			else if(ch>='0'&&ch<='9')
			{
				digit++;
			}
			else
			{
				other++;
			}
			ch=fgetc(fp);
		}
		fclose(fp);
		printf("\nThe total no of vowels = %d, digits = %d , others = %d",vowel,digit,other);
	}
	return 0;
}