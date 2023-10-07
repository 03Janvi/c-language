#include<stdio.h>
struct employee{
	int no;
	char name[100];
	char address[50];
	int age;
};
int main()
{
struct employee s[2];
int i;
for(i=1;i<=5;i++)
{
	printf("Enter number of %d employee:",i);
	scanf("%d",&s[i].no);
	printf("Enter name of %d employee:",i);
	scanf("%s",&s[i].name);
	printf("Enter address of %d employee:",i);
	scanf("%s",&s[i].address);
	printf("Enter age of %d employee:",i);
	scanf("%d",&s[i].age);
}

for(i=1;i<=5;i++)
{
	printf("\n .....Details of %d employee.....",i);
	printf("\n number of employee is %d",s[i].no);
	printf("\n name is %s",s[i].name);
	printf("\n address is %s",s[i].address);
	printf("\n age is %d",s[i].age);
}
	return 0;
}
