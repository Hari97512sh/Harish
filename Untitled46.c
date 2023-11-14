#include<stdio.h>
main()
{
	double radius,area=0;
	double *pradius=& radius,*parea=&area;
	*pradius=10;
	
	*parea=3.14*(*pradius)*(*pradius);
	printf("radius = %.2lf area = %.21f",*pradius,*parea);
}
	
	
