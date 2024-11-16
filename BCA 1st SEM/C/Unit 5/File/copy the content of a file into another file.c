#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ 
	FILE *fp1, *fp2;
	char ch;
	fp1=fopen("welcome.txt","r");
	fp2=fopen("another.txt","w");
	if (fp1==NULL || fp2==NULL)
	{
		perror("File Not Found");
		exit(1);
	}
	else
	{
		ch=fgetc(fp1);
		while(ch!=EOF)
		{
			fputc(ch,fp2);
			ch=fgetc(fp1);
		}
		fclose(fp1);
		fclose(fp2);
	}
	return 0;
}