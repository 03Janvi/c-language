#include<stdio.h>
int main()
{
	int i,num,even=0;
	for(i=1;i<=10;i++)
	{
		printf("Enter %d number:",i);
		scanf("%d",&num);
		if(num%2==0)
		{
			even++;
		}
	}
	printf("The total even numbers are %d",even);
	return 0;
}
