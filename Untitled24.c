#include<stdio.h>
int sum1(int,int);
main()
{
	int c;
   c=sum1(2,5);
   printf("\n%d",c);
}
int sum1(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
