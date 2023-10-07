#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,count=0;
    printf("Enter string:");
    scanf("%s",&a);
    for (i = 0; a[i] != '\0'; i++)
    {
    count ++;
	}
	printf("Length of the string: %d",count);
    return 0;
}
