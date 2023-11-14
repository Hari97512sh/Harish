#include<stdio.h>
main()
{
char x[3]={'a','b','c'};
int a[5]={9,4,3,6,7};
printf(" first : %u",a);
printf("\n address of index 0 :%u",&a[0]);
printf("\n adress of array : %u",&a);
printf("\n address of index 4 :%u",&a[4]);
printf("\n size of array a=%d",sizeof(a));
printf("\n size of array a=%d",sizeof(x));
}
