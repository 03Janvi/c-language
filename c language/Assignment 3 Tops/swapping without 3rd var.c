#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The numbers after swapping is \n first number=%d \n second number=%d",a,b);
	return 0;
}
