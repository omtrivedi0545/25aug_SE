//  WAP to take two array input from user and sort them in ascending or descending order as per user's choice.....

#include<stdio.h>
void reverseSentence();
int main()
{
	printf("enter the sentence :");
	reverseSentence();
	return 0;	
}
void reverseSentence()
{
	char c;
	scanf("%c",&c);
	if (c !='\n')
	{
		reverseSentence();
		printf("%c",c);
	}
}
