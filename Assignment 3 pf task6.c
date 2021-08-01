#include<stdio.h>

void dis(int* j, int index)
{
	printf("The Last Element at index is: %d\n",*(j+index));
}
int main()
{
	printf("Programmer Name:Muhammad Saad\n");
	printf("Reg.No.:20MDELE163\n");
	printf("*******************************************\n");
	int array[]={1,4,3,5,6,8,7,6,8,7,9,-1};
	int* y=array;
	printf("size of array[]: %d\n", sizeof(array));
	printf("size of j: %d\n",sizeof(y));
	printf("First element using array is:%d\n", array[0]);
	printf("First element using y is: %d\n", *y);
	printf("Second element using array is: %d\n",array[1]);
	printf("Second element using y is: %d\n",*(y+1));
	
	dis(y,11);
	return 0;
}
