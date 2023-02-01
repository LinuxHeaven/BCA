#include<stdio.h>
int main()
{
	int i, odd=0, even=0, n[10];
	printf("Enter the 10 integers\n");
	for (i=0;i<10;i++)
	{
		int input;
		input=scanf("%d",&n[i]);
		if (input != 1)// for showing other data type input error message instaed of int here 1 is used for true and int input
		{
			printf("Invalid Input");
			return 0; // for stopping the program
		}
		else 
		{
			if (n[i] % 2 == 0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
	}
	printf("Total no of odds are %d\n",odd);
	printf("Total no of evens are %d",even);
	return 0;
}