#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ 
	FILE *fp;
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
		printf("The character is %c", ch);
		fclose(fp);
	}
	return 0;
}