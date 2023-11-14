#include <stdio.h>
main()
{
	int a;
	int *ptr;
	a=7;
	ptr=&a;
	*ptr=79;
	printf("enter the value of ");
	scanf("%d",ptr);
	
	printf("a is %d",a);
	printf("\naddress of a is %u",&a);
	printf("\naddress of a is %u",ptr);
	printf("\ncheck values of a through ptr %d",*ptr);
	printf("\naddress of ptr is %u",&ptr);
}
