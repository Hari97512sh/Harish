#include<stdio.h>
#include<string.h>
struct book
{
	char bname[20];
	int page;
};
main()
{
	struct book mybook={"abc",20};
	struct book *bptr;
	bptr=&mybook;
	printf("book name: %S and book pages: %d \n",mybook.bname,mybook.page);
	printf("book name: %S and book pages: %d \n",bptr->bname,bptr->page);
	printf("book name: %S and book pages: %d \n",(*bptr).bname,(*bptr).page);
	
}
