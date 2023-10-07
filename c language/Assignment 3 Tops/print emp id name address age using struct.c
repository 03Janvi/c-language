#include<stdio.h>
struct employee{
	int no;
	char name[100];
	char address[50];
	int age;
};
int main()
{
struct employee s1;

	printf("Enter number of employee:");
	scanf("%d",&s1.no);
	printf("Enter name of employee:");
	scanf("%s",&s1.name);
	printf("Enter address of employee:");
	scanf("%s",&s1.address);
	printf("Enter age of employee:");
	scanf("%d",&s1.age);

	printf("\n number of employee is %d",s1.no);
	printf("\n name is %s",s1.name);
	printf("\n address is %s",s1.address);
	printf("\n age is %d",s1.age);

	return 0;
}
