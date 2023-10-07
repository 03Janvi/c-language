#include<stdio.h>
int main()
{
	int fact=1,num,i;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("The factorial of the given number is: %d",fact);
	return 0;
}
