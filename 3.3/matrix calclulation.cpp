#include<stdio.h>
main()
{
	int a[2][4]={1,2,3,4,5,6,7,8};
	int b[2][4]={2,3,4,5,6,7,8,9};
	int c[2][4];
	int row,column;
	
	printf("----first matrix----\n");
	for(row=0;row<2;row++)
	{
		for(column=0;column<4;column++)
		{
			printf(" %d ",a[row][column]);
		}
		printf("\n");
	} 
	printf("----second matrix----\n");
	for(row=0;row<2;row++)
	{
		for(column=0;column<4;column++)
		{
			printf(" %d ",b[row][column]);
		}
		printf("\n");
	} 
	printf("----addition matrix----\n");
	for(row=0;row<2;row++)
	{
		for(column=0;column<4;column++)
		{
			c[row][column]=a[row][column]+b[row][column];
			printf(" %d ",c[row][column]);
		}
		printf("\n");
	}
	printf("----subtraction matrix----\n");
	for(row=0;row<2;row++)
	{
		for(column=0;column<4;column++)
		{
			c[row][column]=a[row][column]-b[row][column];
			printf(" %d ",c[row][column]);
		}
		printf("\n");
	}
	printf("----multiplication matrix----\n");
	for(row=0;row<2;row++)
	{
		for(column=0;column<4;column++)
		{
			c[row][column]=a[row][column]*b[row][column];
			printf(" %d ",c[row][column]);
		}
		printf("\n");
	}
	printf("----divisible matrix----\n");
	for(row=0;row<2;row++)
	{
		for(column=0;column<4;column++)
		{
			c[row][column]=a[row][column]/b[row][column];
			printf(" %d ",c[row][column]);
		}
		printf("\n");
	}
}
