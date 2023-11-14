#include<stdio.h>
struct student
{
	char name[20];
	int regno;
	float marks[3]; 
}
main()
{
	struct student s1={"abc",1,{89.9,88.8,87.7,100.0}};
	printf("%s",s1.name);
	printf("%d\n",s1.name);
	printf("%f\n",s1.marks[0]);
	printf("%f\n",s1.marks[1]);
	printf("%f\n",s1.marks[2]);
	
	
	
	
	
}
