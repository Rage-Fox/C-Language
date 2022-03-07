#include<stdio.h>
int main()
{
	int *ptr=NULL,a=10;//initialise with null
	//ptr=&a;//giving pointer a address
	if(ptr==NULL)
	{
		printf("Pointer is not initialised");
	}
	else
	{
		printf("Pointer is initialised");
	}
}