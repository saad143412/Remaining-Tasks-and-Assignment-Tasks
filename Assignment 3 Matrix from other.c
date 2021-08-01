#include<stdio.h>
int main(){
	int a[10][10],transpose[10][10],r,c;
	printf("Enter rows and columns: ");
	scanf("%d %d",&r,&c);
	
	printf("\nEnter matrix elements:\n");
	int i;
	int j;
	for(i=0;j<r;++i)
	for(j=0;j<c;++j){
		printf("Enter element a%d%d: ",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
	//printing matrix a[][]
	printf("\nEntered matrix: \n");
	for(i=0;i<r;++i)
	for(j=0;j<c;++j){
		printf("%d ",a[i][j]);
		if(i==c-1)
		printf("\n");
	}
	//for computing the transpose
	for(i=0;i<r;++i)
	for(j=0;j<c;++j){
		transpose[j][i]=a[i][j];
	}
	//For printing the transpose
	printf("\nTranspose of the matrix:\n");
	for(i=0;i<c;++i)
	for(j=0;j<r;++j){
		printf("%d ",transpose[i][j]);
		if(j==r-1)
		printf("\n");
	}
	return 0;
}
