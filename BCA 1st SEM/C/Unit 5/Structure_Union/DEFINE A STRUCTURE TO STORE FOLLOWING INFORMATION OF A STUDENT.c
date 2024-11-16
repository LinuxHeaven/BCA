/*
TODO: WAP TO DEFINE A STRUCTURE TO STORE FOLLOWING INFORMATION OF A STUDENT
*1. ROLL NO
*2. NAME
*/

#include<stdio.h>
#include<string.h>

//define the structure
/*
    struct = keyword
    student = structure Tag
*/
struct student
{
	int roll;
	char name[100];
};
int main()
{
	struct student s1;
	s1.roll=140;
	strcpy(s1.name, "Aqua");
	printf("Roll No - %d", s1.roll);
	printf("Name - %s", s1.name);
	return 0;
}