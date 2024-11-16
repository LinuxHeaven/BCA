/*4th pattern - pyramid
               *
             *   *
            *  *  *
          *  *  *  *
        *  *  *  *   *
upto n */
#include<stdio.h>
int main ()
 {
 	int i, n, j;// i is for rows and j is for colums
 	printf("Enter the term ");
 	scanf("%d",&n);
 	for (i=1;i<=n;i++)//for rows
 	{
 		for (j=1;j<=n;j++)//for colums
 		{
 			if ((i+j)<=n)
 			{
 				printf(" ");// for printing space in the row
			}
			else
			{
 				printf("* ");// for printing *s in the row
 			}
		}
		printf("\n");// for changing rows
 	}
 	return 0;
 }