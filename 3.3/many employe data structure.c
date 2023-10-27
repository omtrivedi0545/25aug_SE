#include<stdio.h>

struct employee 
{
	int no;
	char name [50];
	char address[100];
	int age;
};

void printEmployee(struct employee p)
{
	printf("employee no=%d\nemployee name=%s\nemployee address=%s\nemployee age=%d",p.no,p.name,p.address,p.age);

}
int main()
{
	struct employee p1 = {101, "dilip dabhi ","bhavnagar",19};
	struct employee p2 = {102, "harsh patel ","ahmedabad",20};
	struct employee p3 = {103, "manav gathani ","rajkot",25};
	struct employee p4 = {104, "shivarsh ","jamnagar",21};
	struct employee p5 = {105, "heet","botad",20};
	
    printf("\ndetails of employee 1:\n\n");
    printEmployee(p1);
    
    printf("\ndetails of employee 2:\n\n");
    printEmployee(p2);
    
    printf("\ndetails of employee 3:\n\n");
    printEmployee(p3);
    
    printf("\ndetails of employee 4:\n\n");
    printEmployee(p4);
    
    printf("\ndetails of employee 5:\n\n");
    printEmployee(p5);
}
