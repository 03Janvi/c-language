#include <stdio.h>
int main()
 {
    int num1, num2, choice,result;
    printf("Enter your choice: \n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
    scanf("%d", &choice);

    switch(choice)
	 {
        case 1:
        	printf("Enter first number:");
    		scanf("%d",&num1);
    		printf("Enter Second number:");
    		scanf("%d",&num2);
            result = num1 + num2;
            printf("Addition: %d\n", result);
            break;
        case 2:
        	printf("Enter first number:");
    		scanf("%d",&num1);
    		printf("Enter Second number:");
    		scanf("%d",&num2);
            result = num1 - num2;
            printf("Subtraction: %d\n", result);
            break;
        case 3:
        	printf("Enter first number:");
    		scanf("%d",&num1);
    		printf("Enter Second number:");
    		scanf("%d",&num2);
            result = num1 * num2;
            printf("Multiplication: %d\n", result);
            break;
        case 4:
        	printf("Enter first number:");
    		scanf("%d",&num1);
    		printf("Enter Second number:");
    		scanf("%d",&num2);
            result = (float)num1 / num2;
            printf("Division: %d\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
