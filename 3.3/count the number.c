#include<stdio.h>
main()
{
	char a[100];
	printf("\nenter the number :");
	scanf("%s",&a);
	
	int count=0;
	while (a[count]!=0)
	{
		count++;
	}
	printf("\n%d",count);
}
