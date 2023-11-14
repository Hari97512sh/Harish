#include<stdio.h>
void fun1()
{
	auto int a=10;
	printf(" fun 1 output = %d",a);
}
void fun2()
{
	auto int a=20;
	printf(" \n fun 1 output =%d",a);
}
main()
{
auto int a=30;
printf(" \n output a in main = %d",a);
fun1();
fun2();
}
