#include<stdio.h>
int main()
{
	int cp, sp, pl;
	printf("Enter the cost price\n");
	scanf("%d",&cp);
	printf("Enter the selling price\n");
	scanf("%d",&sp);
	if(sp>cp)
	{
		pl = sp - cp;
		printf("The profit is %d amount",pl);
	}
	else if(sp<cp)
	{
		pl = cp - sp;
		printf("The loss is %d amount",pl);
	}
	else
	{
		printf("No profit No Loss");
	}
	return 0;
}