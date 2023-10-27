#include<stdio.h>
struct employee 
{
	int no;
	char name[16];
	char address[4];
	int age;
};
main()
{
	struct employee p;
//	scanf("%d %s %s %d",&p.no,p.name,p.address,p.age);
//	printf("no=%d\nname=%s\naddress=%s\nage=%d",p.no,p.name,p.address,p.age);
	
	printf("enter the no. :");
	scanf("%d",&p.no);
	printf("%d",p.no);
	
	printf("\nenter the name :");
	scanf("%s",&p.name);
	printf("%s",p.name);
	
	printf("\nenter the address :");
	scanf("%s",&p.address);
	printf("%s",p.address);
	
	printf("\nenter the age :");
	scanf("%d",&p.age);
	printf("%d",p.age);
}
