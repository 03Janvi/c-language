#include<stdio.h>
int main()
{
	int number[100],n,i,j,temp;
	printf("no. of elements you want to enter: ");
	scanf("%d",&n);
	printf("enter elements:"); 
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	printf("Enter array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",number[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(number[i]>number[j])
			{
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
	}	
		printf("\nafter assending order array is:\n");
		for(i=0;i<n;i++)
	{
		printf("%d",number[i]);
	}	
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(number[i]<number[j])
			{
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
	}	
		printf("\nafter decending order array is:");
		for(i=0;i<n;i++)
	{
		printf("%d",number[i]);
	}	
	return 0;
}
