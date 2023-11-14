#include<stdio.h>
#include<string.h>
main()
{
	char str[20]="I am a student";
	int i;
	i=strlen(str);
	printf("%d\n",i);
	i=strrev(str);
	printf("%s\n",i);
	i=strlwr(str);
	printf("%s\n",i);
	i=strupr(str);
	printf("%s\n",i);
	
}
