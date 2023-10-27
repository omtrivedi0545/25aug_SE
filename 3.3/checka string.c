//  WAP to reverse a string and check that the string is palidrome or not...


#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	
	printf("enter a string to check if it is a palindrome\n");
	gets(a);
	
	strcpy(b,a);  //copying input string
	strrev(b);    //reversing the string
	
	if (strcmp(a,b)==0)  //comparing input string with the reverse string
	printf("the string is a palidrome.\n");
	else
	 printf("the string is not palidrome.\n");
}
