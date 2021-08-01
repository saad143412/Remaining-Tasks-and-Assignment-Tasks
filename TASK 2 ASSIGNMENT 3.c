#include<stdio.h>
float summing(int x,int y,int z);
int main()
{
	int p;
	p=summing(8,10,12);
	printf("%d",p);
}
float summing(int x,int y,int z)
{
	printf("The summation of 3 variables:\nx %d\ny %d\nz %d\n+_______________\n",x,y,z);
	return x+y+z;
}
