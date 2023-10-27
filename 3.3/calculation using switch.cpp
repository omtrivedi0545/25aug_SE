#include<stdio.h>
main()
{
	int number_1,number_2;
	printf("enter the number_1 :");
	scanf("%d",&number_1);
	printf(" \nenter the number_2 :");
	scanf("%d",&number_2);	
	
	printf("\n.......MENU.......");
	printf("\n 1. Addition.....");
	printf("\n 2. subtraction.....");
	printf("\n 3. multiplication.....");
	printf("\n 4. division.....");
	
	int choice;
	printf("\n.....enter your choice..... :");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			printf("Addition of number 1 and number 2 is %d\n ",number_1 + number_2);
			break;
			
		case 2:
			printf("subtraction of number 1 and number 2 is %d\n ",number_1 - number_2);
			break;
			
		case 3:
			printf("multiplication of number 1 and number 2 is %d\n ",number_1 * number_2);
			break;
			 
		case 4:
			printf("\ndivision of number 1 and number 2 is %d ",number_1 / number_2);
			break;
			
			default:
			printf("invalid value ");
			
			
			
	}
}
