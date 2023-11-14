#include<stdio.h> //linear search using loc -1
main()
{
	int a[50];
	int i,key,loc=-1;
	printf("enter the elements\n");
	     for(i=0;i<5;i++)
	     {
	      scanf("%d",&a[i]);
	  }
    key=3;
	for(i=0;i<5;i++)
	{
		if(a[i]==key)
		{
			printf("\n key found : %d",key);
			printf("\n the index of the key is : %d",i);
			printf("\n the position of the key is : %d",i+1);
		}
	}
	
	       	
}
