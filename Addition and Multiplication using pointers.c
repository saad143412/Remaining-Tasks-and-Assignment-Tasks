#include<stdio.h>
#include<conio.h>
void main()
{
	int *p, *q;
    int m, n;
    int res, res1;
    printf("\nEnter two numbers");
    scanf("%d%d",&m,&n);
    p = &m;
    q = &n;
    res = (m + n) * (m * n);
    printf("Result (using numbers) : %d\n",res);
    res1 = (*p + *q) * (*p * *q);
    printf("Result (using pointers) : %d\n",res1);
    getch();
}

