#include<stdio.h>
int main()
{
	int sum=0,a,num;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		a=num%10;
		sum+=a;
		num=num/10;
	}
	printf("The sum of the entered digits is %d",sum);
	return 0;
}
