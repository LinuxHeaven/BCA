/*
TODO: Write a program to store the information of 5 students in a structure. The information of each student includes roll number and name. The program should display the information of all the students.
*/
#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[50];
};

int main()
{
	int i;
	struct student st[5];//array of structure variable
	for(i=0;i<5;i++)
	{
		printf("Enter the Roll No \n");
		scanf("%d",&st[i].roll);
		printf("Enter the Name \n");
		scanf("%s",st[i].name);
		fflush(stdin); // for stopping the error for using scanf instead of gets()
	}
	for(i=0;i<5;i++)
	{
		printf("Roll No %d and Name %s \n",st[i].roll,st[i].name);
	}
	return 0;
}