#include<stdio.h>
main()
{
	int var=7;
	int*ptr1;
	int**ptr2;
	ptr1=&var;
	ptr2=&ptr1;
	printf("%d\n",var);
	printf("%d\n",*ptr1);
	printf("%d\n",**ptr2);
	
	printf("\n%d\n",&var);
	printf("%d\n",&ptr1);
	printf("%d\n",&ptr2);
	
	printf("\n%d\n",ptr1);
	printf("%d\n",ptr2);
	
	printf("\n%d\n",*ptr2);
	
}
