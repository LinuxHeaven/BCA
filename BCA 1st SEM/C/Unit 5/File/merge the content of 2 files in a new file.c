#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ 
	FILE *fp1, *fp2, *fp3;
	char ch;
	fp1=fopen("hello.txt","r");
	fp2=fopen("welcome.txt","r");
	fp3=fopen("final.txt","w");
	if (fp1==NULL || fp2==NULL || fp3==NULL )
	{
		perror("File Not Found");
		exit(1);
	}
	else
	{
		ch=fgetc(fp1);
		while(ch!=EOF)
		{
			fputc(ch,fp3);
			ch=fgetc(fp1);
		}
		ch=fgetc(fp2);
		while(ch!=EOF)
		{
			fputc(ch,fp3);
			ch=fgetc(fp2);
		}
		fclose(fp1);
		fclose(fp2);
		fclose(fp3);
	}
	return 0;
}