#include<stdio.h>
int main()
{
	int i,a,ans,num,large=0;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		a=num%10;
		if(a>large)
		{
			large=a;
		}
		num=num/10;	
	}
	printf("The largest digit is %d",large);
	return 0;
}
