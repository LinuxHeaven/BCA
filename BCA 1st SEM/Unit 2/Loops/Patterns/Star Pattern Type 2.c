/*2nd pattern - half pyramid
* * * * *
* * * *
* * *
* *
* upto n terms */
#include<stdio.h>
int main ()
 {
 	int i, n, j;// i is for rows and j is for colums
 	printf("Enter the term ");
 	scanf("%d",&n);
 	for (i=1;i<=n;i++)//for rows
 	{
 		for (j=n;j>=i;j--)//for colums
 		{
 			printf("* ");// for printing *s in the row and for changing colums
		}
		printf("\n");// for changing rows
 	}
 	return 0;
 }