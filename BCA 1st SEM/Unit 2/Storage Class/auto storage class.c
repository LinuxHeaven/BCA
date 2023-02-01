#include<stdio.h>
void func();
int main()
{
	func();
	func();
	func();
	func();
	return 0;
}
void func()
{
	auto int a=1;
	a++;
	printf("%d\n",a);
}