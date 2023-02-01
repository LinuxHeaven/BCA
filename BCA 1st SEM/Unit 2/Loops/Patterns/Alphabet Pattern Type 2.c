//Alphabet pattern - type 2
/*  A
    B B
    C C C
    D D D D
    E E E E E*/
// ASCII Code 65 = A | 90 = Z | 97=a | 122=z
#include<stdio.h>
int main ()
{
	int i, j, n;//i= rows, j= colums
	printf("Enter the terms ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%c",i+64);
		}
		printf("\n");
	}
	return 0;
}