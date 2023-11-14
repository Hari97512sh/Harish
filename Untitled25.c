#include<stdio.h>
main()
{
	int a,b;
	a=4;
	b=8;
	printf("a=%d and b=%d",a,b);
	swap1(a,b);
}
void swap1(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	printf("\n values after swapping operation in function a=%d and b=%d",x,y);
}
