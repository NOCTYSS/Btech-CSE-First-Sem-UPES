#include <stdio.h>
#include <string.h>
int choice;
int a, b;
double result = 0.0;
int main()
{
    printf("Enter the value of a :");
    if(scanf("%d", &a) != 1) 
    {
        printf("Invalid input. Please enter an integer for a.\n");
        return 1;
    }
    printf("Enter the value of b :");
    if(scanf("%d", &b) != 1) 
    {
        printf("Invalid input. Please enter an integer for b.\n");
        return 1;
    }
    printf("choose the operators you want to perform:\n");
    printf("1 : Addition\n");
    printf("2 : Subtraction\n");
    printf("3 : Multiplication\n");
    printf("4 : Division\n");
    printf("5 : Remainder\n");
    printf("Enter your choice (1-5): ");
    if(scanf("%d", &choice) != 1 || choice < 1 || choice > 5) 
    {
        printf("Invalid input. Please enter a number between 1 and 5 for the operation.\n");
        return 1;
    }
    switch(choice)
    {
        case 1:
            result = a + b;
            printf("The addition of two numbers is: %f\n", result);
            break;
        case 2:
            result = a - b;
            printf("The subtraction of two numbers is: %f\n", result);
            break;
        case 3:
            result = a * b;
            printf("The multiplication of two numbers is: %f\n", result);
            break;
        case 4:
            if(b == 0) 
            {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            result = a / b;
            printf("The division of two numbers is: %f\n", result);
            break;
        case 5:
            if(b == 0) 
            {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            result = a % b;
            printf("The remainder of two numbers is: %f\n", result);
            break;
        default:
            // This case should never be reached due to earlier validation
            printf("Invalid operator.\n");
            return 1;
    }
    return 0;
}