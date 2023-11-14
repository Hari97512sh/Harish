#include<stdio.h>
extern int a=5;
main()
{
	printf(" \n showing extern variable a= %d",a);
	{
		int a=9;
		printf(" \n showing inside block a= %d",a);
	}
}
