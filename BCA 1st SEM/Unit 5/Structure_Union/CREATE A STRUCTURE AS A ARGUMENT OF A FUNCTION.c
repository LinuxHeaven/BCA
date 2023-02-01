/*
TODO: CREATE A STRUCTURE AS A ARGUMENT OF A FUNCTION
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student
{
    int roll;
    char name[50];
    int marks;
};

//!CREATE A FUNCTION TO DISPLAY THE STUDENT DETAILS
/*  
    * here we are passing the structure pointer as a argument of the function
    * ptr is the structure pointer
    * n is the number of students
*/

void displaystudent ( struct student *ptr , int n )
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Roll No %d and Name %s and marks %d \n",ptr[i].roll,ptr[i].name,ptr[i].marks);
	}
}
int main()
{
	struct student st[100]; //array of structure
	int i, n=0;
	for (i=0;i<5;i++)
	{
		printf("Enter the Roll No \n");
		scanf("%d",&st[i].roll);
		printf("Enter the Name \n");
		scanf("%s",st[i].name);
		fflush(stdin); // for stopping the error for using scanf instead of gets()
		printf("Enter the marks \n");
		scanf("%d",&st[i].marks);
		n=n+1;
	}
//!CALL THE FUNCTION TO DISPLAY THE STUDENT DETAILS
    /*
        * here we are passing the structure variable as a argument of the function
        * st is the structure variable
        * n is the number of students
    */
	displaystudent(st,n);
	return 0;
}