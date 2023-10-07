#include<stdio.h>
int main()
{
	int i,temp,num,ans=0,a;
	printf("Enter the number:");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		a=num%10;
		ans=a*a*a+ans;
		num=num/10;
	}
	if(temp==ans)
	{
		printf("The number is armstrong");
	}
	else
	{
		printf("The number is not a armstrong number");
	}
	return 0;
}
