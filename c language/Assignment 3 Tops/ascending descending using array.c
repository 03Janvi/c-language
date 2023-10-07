#include<stdio.h>
int main()
{
	int number[100],n,i,j,temp,choice;
	printf("Enter 1 for ascending and 2 for descending\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("how many elements you want to enter?");
		scanf("%d",&n);
		printf("enter elements"); 
		for(i=0;i<n;i++)
		{
			scanf("%d",&number[i]);
		}
		printf("\n before assending order array is:");
		for(i=0;i<n;i++)
		{
			printf("%d",number[i]);
		}
		printf("\n");
	
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
			printf("\n after assending order array is:");
			for(i=0;i<n;i++)
		{
			printf("%d",number[i]);
		}
			break;
		case 2:
		printf("how many elements you want to enter?");
		scanf("%d",&n);
		printf("enter elements"); 
		for(i=0;i<n;i++)
		{
			scanf("%d",&number[i]);
		}
		printf("\n before descending order array is:");
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
			printf("\n after descending order array is:");
			for(i=0;i<n;i++)
		{
			printf("%d",number[i]);
		}
		break;
		
		default:
			printf("Enter valid choice");

	}
	return 0;
	
}
