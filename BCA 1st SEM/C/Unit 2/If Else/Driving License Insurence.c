#include<stdio.h>
int main ()
{
	int age;
	char m, s;
	printf("Enter the age over 18\n");
	printf("Enter the ms in capital Y/N\n");
	printf("Enter the sex M/F in capital\n");
	scanf("%d %c %c", &age, &m, &s);
	//age calculation
	if (age<18)
	{
		printf("Underaged Not Eligible");
	}
	else
	{
		if (m=='Y'&&(s=='M'||s=='F'))
		{
			printf("Insurence Eligible and Driver is Married");//Mariage Status
		}
		else if (m=='N')
		{//based on gender criteria
			if (s=='M')
			{//for male driver
				if (age>30)
				{
					printf("Insurence Eligible and Driver is a Male, Unmarried");
				}
				else
				{
					printf("Insurence not Eligible and Driver is a Male, Unmarried");
				}
			}
			else if (s=='F')
			{//for female driver
				if(age>25)
				{
					printf("Insurence Eligible and Driver is a Female, Unmarried");
				}
				else
				{
					printf("Insurence not Eligible and Driver is a Female, Unmarried");
				}
			}
			else
			{
				printf("Invalid sex Input");//for invalid input in sex/s variable
			}
			
		}
		else
		{
			printf("Invalid marriage status Input");//for invaild ms/m variable input value
		}
	}
	return 0;
}