#include<stdio.h>
void summing(sum)
{
 printf("The sum of three numbers is %d\n",sum);
}
int main(void)
{
 int x,y,z; // input: the three numbers 
 int sum;
 /* get the three numbers from the user */
 printf("Enter X: ");
 scanf("%d",&x);
 printf("Enter Y: ");
 scanf("%d",&y);
 printf("Enter Z: ");
 scanf("%d",&z);
 sum = x+y+z;
 /* call the function that print the value of sum which is equal to x+y+z*/
 summing(sum);
 return (0);
} 
#include<stdio.h>
int float_summing(int x,int y,int z)
{
 int p;
 p = x + y + z;
 return (p);
}

int main(void)
{
 int x, y, z; //input: the three numbers
 int p;
 /* Get the three numbers from the user */
 printf("Enter X : ");
 scanf("%d", &x);
 printf("Enter Y : ");
 scanf("%d", &y);
 printf("Enter Z : ");
 scanf("%d", &z);
 /* call the function that calculate the sum of three numbers */
 p = float_summing(x,y,z);
 printf("sum = %d\n",p);
 return (0);
} 
#include<stdio.h>
void display(int sum); //function declaration 
int main(void)
{
	printf("Programmer Name:Muhammmad Saad\n");
 int x,y,z; //input: the three numbers 
 int sum;
 /* get the three numbers from the user */
 printf("Enter Value of X:");
 scanf("%d", &x);
 printf("Enter Value of Y:");
 scanf("%d", &y);
 printf("Enter Value of Z:");
 scanf("%d", &z);
 sum = x+y+z;
/* call the function that print the value of sum which is equal to x+y+z*/
 display(sum);
 return (0);
}
void display(int sum)
{
 printf("The sum of three numbers is %d \n ",sum);
} 
#include<stdio.h>
int main()
{
	int *ptr1;
	int x=163;
	ptr1=&x;
	printf("%d",x);
	
}
#include<stdio.h>
int main()
{
	printf("Progrmmer Name:Muhammad Saad\n");
	int *ptr1;          //I create a pointer named ptr1
	int LOCATION=163;    //Now I create variable and named it "LOCATION"
	ptr1=&LOCATION;      //store the address of integer variable inside ptr1
	printf("%d\n",LOCATION);
	printf("%p\n",&LOCATION); //For showing the address of LOCATION Variable
	
}
#include<stdio.h>
int main()
{
	printf("Progrmmer Name:Muhammad Saad\n");
	int LOCATION=1100;    //Now I create variable and named it "LOCATION"
	int *ptr1;          //I create a pointer named ptr1
	ptr1=&LOCATION;      //store the address of integer variable inside ptr1
	printf("%d\n",*ptr1);   //For showing what's inside ptr1
	printf("%p\n",&ptr1); 
	printf("%p\n",ptr1+1); 
	printf("%p\n",ptr1+2); 
	printf("%p\n",ptr1+3);
	printf("%p\n",ptr1+4);
	printf("%p\n",ptr1+5);
	printf("%p\n",ptr1+6); 
	printf("%p\n",ptr1+7);
	printf("%p\n",ptr1+8);
	printf("%p\n",ptr1+9);
	printf("%p\n",ptr1+10);
	
}
