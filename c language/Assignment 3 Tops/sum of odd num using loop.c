#include<stdio.h>
int main()
{
	int i,num,sum=0;
	for(i=1;i<=10;i++)
	{
		printf("Enter %d number:",i);
		scanf("%d",&num);
		if(num%2!=0)
		{
			sum+=num;
		}
	}
	printf("The sum of odd numbers are %d",sum);
	return 0;
}
