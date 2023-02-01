//Numbers pattern - type 4
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
#include<stdio.h>
int main()
{
	int i,j,k,d=1,n;//i=rows,j=columns,k=spaces,d=numbers or digits
	printf("Enter the number ");
	scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)//for printing space in the row
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)//for printing numbers in the row
        {
            printf("%d ",d);
            d++;
        }
        for(k=1;k<=i-1;k++)//for printing -1 number in the row
        {
            printf("%d ",d-2);
            d--;
        }
        printf("\n");
    }
    return 0;
}