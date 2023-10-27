#include<stdio.h>
int reverse(int n)
{
	int i;
	
	while (n!=0)
	{
		i=n%10;
		printf("%d",i);
		n=n/10;
	}
}
main()
{
//	int number=456;
	printf("%d",reverse(456));
}
