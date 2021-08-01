#include<stdio.h>

int main(){
	printf("Programmer Name:Muhammad Saad\n***************\n");
	
	//Now i initial an array of ints
	int ptr[1100]={1,2,3,4,5,6,7,8,9,10};
	int ptr1=0;
	//Print the address of the array of the array variable
	printf("numbers=%p\n",ptr);
	
	do{
		printf("numbers[%u]=%p\n",ptr1,(void*)(&ptr[ptr1]));
		ptr1++;
	}
	while(ptr1<10);
	//I can also Print the size of the array 
	printf("sizeof(numbers)=%lu\n",sizeof(ptr));
	
}
