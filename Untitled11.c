#include <stdio.h>
main()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	if(age>18)
	{
		printf("you are eligibile to vote");
		printf("\n you are %d years ahead of eligible age",age-18);
	}
	else
	{
		printf("you are not elegible to vote");
	}
}
