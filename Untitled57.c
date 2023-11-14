#include<stdio.h>
#include<string.h>
struct student
{
	char name[30];
	int rollno;
	float fee;
};
main()
{
	int a;
	struct student s1,s2;
	s1.rollno=12;
	s1.fee=74400;
	strcpy(s1.name,"sibi");
	strcpy(s2.name,"sibi raj");
	s2.fee=120000;
	s2.rollno=12;
	printf("the student details for fees are=%s %d %f",s1.name,s1.rollno,s1.fee);
	printf("the student details for fees are=%s %d %f",s2.name,s2.rollno,s2.fee);
	
}
	
	
	
	
	
