// PRE INCREMENT POST INCREMENT

#include<stdio.h>
main()
{
	int a=4;
	printf("without unary operation a=%d",a);
	int b;
	b=a++;
	printf("\n b after post inc operation %d",b);
	printf("\n a after post inc operation %d",a);
	
	b=a--;
	
	printf("\n b after post inc operation %d",b);
	printf("\n a after post inc operation %d",a);
}
	

