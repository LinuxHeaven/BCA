/**
 * * Problem Statement:
 * TODO: Write a program to define a structure to store the details of an employee. 
 * The details include employee id,name and date of joining.
 * The date of joining should be stored in another structure which includes day, month and year. Display the details of the employee.
 */
 #include<stdio.h>
 #include<string.h>
 struct date
 {
 	int dd;
 	int mm;
 	int yyyy;
 };
 struct employee
 {
 	int id;
 	char name[100];
 	struct date doj;
 };
 int main ()
 {
 	struct employee e1;
 	e1.id=1;
 	strcpy(e1.name, "Blaze");
 	e1.doj.dd=15;
 	e1.doj.mm=4;
 	e1.doj.yyyy=2025;
 	
 	struct employee e2;
 	e2.id=2;
 	strcpy(e2.name, "Aqua");
 	e2.doj.dd=7;
 	e2.doj.mm=7;
 	e2.doj.yyyy=2025;
 	
 	struct employee e3;
 	e3.id=3;
 	strcpy(e3.name, "Land");
 	e3.doj.dd=15;
 	e3.doj.mm=4;
 	e3.doj.yyyy=2025;
 	
 	struct employee e4;
 	e4.id=4;
 	strcpy(e4.name, "Areo");
 	e4.doj.dd=7;
 	e4.doj.mm=7;
 	e4.doj.yyyy=2025;
 	
 	printf("Employee Id = %d\n",e1.id);
    printf("Employee Name = %s\n",e1.name);
    printf("Employee Date of Joining (dd/mm/yy): %d / %d / %d \n",e1.doj.dd,e1.doj.mm,e1.doj.yyyy);
    
    printf("Employee Id = %d\n",e2.id);
    printf("Employee Name = %s\n",e2.name);
    printf("Employee Date of Joining (dd/mm/yy): %d / %d / %d \n",e2.doj.dd,e2.doj.mm,e2.doj.yyyy);

	printf("Employee Id = %d\n",e3.id);
    printf("Employee Name = %s\n",e3.name);
    printf("Employee Date of Joining (dd/mm/yy): %d / %d / %d \n",e3.doj.dd,e3.doj.mm,e3.doj.yyyy);
    
    printf("Employee Id = %d\n",e4.id);
    printf("Employee Name = %s\n",e4.name);
    printf("Employee Date of Joining (dd/mm/yy): %d / %d / %d \n",e4.doj.dd,e4.doj.mm,e4.doj.yyyy);
    
    return 0;
 }
 