/*1st patetrn - half pyramid
 *
 * *
 * * *
 * * * *
 * * * * * upto n */
 #include<stdio.h>
 int main ()
 {
 	int i, n, j;// i is for rows and j is for colums
 	printf("Enter the term ");
 	scanf("%d",&n);
 	for (i=1;i<=n;i++)//for rows
 	{
 		for (j=1;j<=i;j++)//for colums
 		{
 			printf("* ");// for printing *s in the row and for changing colums
		}
		printf("\n");// for changing rows
 	}
 	return 0;
 }