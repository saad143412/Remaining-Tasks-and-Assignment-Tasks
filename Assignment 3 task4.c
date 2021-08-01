#include<stdio.h>
int main()
{
	int fun=123;   //Variable declaration
	int *ptr1;    //Pointer declaration
	ptr1=&fun;   
	printf("Address stored in variable fun is:%p\n",ptr1);
	printf("value stored in variable fun is:%d\n",*ptr1);
	return 0;
}
