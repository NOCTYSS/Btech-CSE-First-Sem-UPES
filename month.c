#include <stdio.h>
int choice =0;
int main(){
    printf("Enter a number between 1 and 12 to get the corresponding month: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("January\n");
            break;  
            printf("Days : 31\n");
        case 2:
            printf("February\n");
            break;  
            printf("Days : 28/29\n");   
        case 3:
            printf("March\n");
            break;  
            printf("Days : 31\n");
        case 4:     
            printf("April\n");
            break;  
            printf("Days : 30\n");
        case 5:
            printf("May\n");
            break;  
            printf("Days : 31\n");
        case 6:
            printf("June\n");
            break;  
            printf("Days : 30\n");
        case 7:     
            printf("July\n");
            break;  
            printf("Days : 31\n");
        case 8:
            printf("August\n");
            break;  
            printf("Days : 31\n");
        case 9:
            printf("September\n");
            break;  
            printf("Days : 30\n");
        case 10:
            printf("October\n");
            break;  
            printf("Days : 31\n");
        case 11:
            printf("November\n");
            break;  
            printf("Days : 30\n");
        case 12:
            printf("December\n");
            break;  
            printf("Days : 31\n");
        default:
            printf("Invalid input! Please enter a number between 1 and 12.\n");
            break;
    return 0;
    }
}