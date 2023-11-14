#include <stdio.h>
main()
{
	int age=30;
	//(age>18) ? (printf("eligible for voting")) : printf("not eligible for voting"));
	(age>18)?(age+=10): (age-=10);
	printf("updated age is %d",age);
}
