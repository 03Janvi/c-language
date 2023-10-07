#include<stdio.h>
 int main()
 {
 	int i,temp,num,a,ans;
 	printf("Enter the number:");
 	scanf("%d",&num);
 	temp=num;
 	while(num>0)
 	{
 	 a=num%10;
	 ans=ans*10+a;
	 num=num/10;	
	}
	printf("The reverse number is %d",ans);
	return 0;
 }
