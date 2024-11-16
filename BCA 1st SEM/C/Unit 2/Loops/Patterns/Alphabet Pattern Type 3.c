//Alphabet pattern - type 3
/*  A
    B C
    D E F
    G H I J
    K L M N O*/
// ASCII Code 65 = A | 90 = Z | 97=a | 122=z
#include<stdio.h>
int main ()
{
	int i, j, d=65, n;//d=numbers or digits or alphabet , i= rows, j= colums
	printf("Enter the terms");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%c ",d);
			d++;
		}
		printf("\n");
	}
	return 0;
}