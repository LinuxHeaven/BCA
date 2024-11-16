#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ 
	FILE *fp;
	char ch[100];
	fp=fopen("welcome.txt","a");
	if (fp==NULL)
	{
		perror("File Not Found");
		exit(1);
	}
	else
	{
		printf("Enter the new characters : ");
		gets(ch);
		fputs(ch,fp);
		fclose(fp);
	}
	return 0;
}