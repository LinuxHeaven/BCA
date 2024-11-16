#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ 
	FILE *fp;
	char ch[100];
	fp=fopen("THA.txt","w");
	if (fp==NULL)
	{
		perror("File Not Found");
		exit(1);
	}
	else
	{
		printf("Enter the characters : ");
		gets(ch);
		fputs(ch,fp);
		fclose(fp);
	}
	return 0;
}