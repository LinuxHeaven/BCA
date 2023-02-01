/**
 * Example
Input
Input any number: 121
 * Output
121 is palindrome
 * 
 */
 #include<stdio.h>
int main ()
{
	int n, rev=0, rem, safe;
	printf("Enter the number = ");
	scanf("%d",&n);
	safe=n;
	while (n!=0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	if (safe==rev)
	{
		printf("The Number is a palindrome Number");
	}
	else
	{
		printf("The Number is not a palindrome Number");
	}
	return 0;
}