#include<stdio.h>
void main()
{
	/*
	Programmer Name:Muhammad Saad
	Reg.No.:20MDELE163
	Date:22/07/2021
	*/                      
	printf("Programmer Name:Muhammad Saad\nReg.No.:20MDELE163\n\n");
	int i,j;                       //declare i and j
	for(i=50;i<=150;i++)          //using for_loop
	{
		for(j=2;j<=i;j++)       //using for_loop
		{
			if(i%j==0)        //using if_statement
			{
				break;      //using 'break' statement
			}              //End of 'break' statement
		}                 //End of internal_block
	    if(i==j)         //using if_statement
	      {
		    printf("%d is prime number.\n",i);   //Display Prime Numbers
		  }                                //End of printf block
		  
    }          //End of External block
}             ////End of main_block

