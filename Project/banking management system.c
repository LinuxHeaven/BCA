#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct customer
{
	char name[100];
	int accountNumber;
	char accountType[100];
	int balance;
	char address[100];
	char phoneNumber[100];
	char dob[100];
};
void addCustomer(struct customer *p, int *an)
{
	printf("Enter the name : \n");
	scanf("%s",p[*an].name);
	fflush(stdin);
	printf("Enter the account number : \n");
	scanf("%d",&p[*an].accountNumber);
	printf("Enter the account type : \n");
	scanf("%s",p[*an].accountType);
	printf("Enter the account balance : \n");
	scanf("%d",&p[*an].balance);
	printf("Enter the address : \n");
	scanf("%s",p[*an].address);
	printf("Enter the phone number : \n");
	scanf("%s",p[*an].phoneNumber);
	printf("Enter the date of birth : \n");
	scanf("%s",p[*an].dob);
	*an=*an+1;
}
void displayAllCustomers(struct customer *p, int an)
{
	int i;
	for (i=0;i<an;i++)
	{
		printf("Name : %s\n",p[i].name);
		printf("Account number : %d\n",p[i].accountNumber);
		printf("Account type : %s\n",p[i].accountType);
		printf("Account balance : %d\n",p[i].balance);
		printf("Address : %s\n",p[i].address);
		printf("Phone number : %s\n",p[i].phoneNumber);
		printf("Enter the date of birth : %s\n",p[i].dob);
	}
}
void searchCustomer(struct customer *p, int an)
{
	int i, acno;
	printf("Enter the account number to search : \n");
	scanf("%d",&acno);
	for (i=0;i<an;i++)
	{
		if (p[i].accountNumber==acno)
		{
			printf("Name : %s\n",p[i].name);
			printf("Account number : %d\n",p[i].accountNumber);
			printf("Account type : %s\n",p[i].accountType);
			printf("Account balance : %d\n",p[i].balance);
			printf("Address : %s\n",p[i].address);
			printf("Phone number : %s\n",p[i].phoneNumber);
			printf("Enter the date of birth : %s\n",p[i].dob);
			return;
		}
	}
	printf("Account number not found \n");
}
void updateCustomer(struct customer *p, int an)
{
	int i, acno;
	printf("Enter the account number to update : \n");
	scanf("%d",&acno);
	for (i=0;i<an;i++)
	{
		if (p[i].accountNumber==acno)
		{
			printf("Enter the name : \n");
			scanf("%s",p[an].name);
			fflush(stdin);
			printf("Enter the account number : \n");
			scanf("%d",&p[an].accountNumber);
			printf("Enter the account type : \n");
			scanf("%s",p[an].accountType);
			printf("Enter the account balance : \n");
			scanf("%d",&p[an].balance);
			printf("Enter the address : \n");
			scanf("%s",p[an].address);
			printf("Enter the phone number : \n");
			scanf("%s",p[an].phoneNumber);
			printf("Enter the date of birth : \n");
			scanf("%s",p[an].dob);
			return;
		}
	}
	printf("Account number not found \n");
}
void deleteCustomer(struct customer *p, int *an)
{
	int i, acno;
	printf("Enter the account number to delete : \n");
	scanf("%d",&acno);
	for (i=0;i<*an;i++)
	{
		if (p[i].accountNumber==acno)
		{
			p[i]=p[*an-1];//-1=delete
			*an=*an-1;
			return;
		}
	}
	printf("Account number not found \n");
}
int main()
{
	struct customer c[100];
	int n=0, choice;
	while(1)
	{
		printf("1. Add customer\n");
        printf("2. Display all customers\n");
        printf("3. Search customer\n");
        printf("4. Update customer\n");
        printf("5. Delete customer\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
        	case 1:
            addCustomer(c, &n);
            break;
        	case 2:
            displayAllCustomers(c, n);
            break;
        	case 3:
            searchCustomer(c, n);
            break;
        	case 4:
            updateCustomer(c, n);
            break;
        	case 5:
            deleteCustomer(c, &n);
            break;
        	case 6:
            exit(1);
        	default:
            printf("Invalid choice");
        }
    }
    return 0;
}