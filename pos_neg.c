#include <stdio.h>
#include <math.h>
int n=0;
int main()
{
    printf("Enter the  number to check positive or negative: ");
    if(scanf("%d",&n) !=1)
    {
        printf("Invalid input . Please enter an integer.\n");
        return 1; // Exit the program with an error code
    }
    else{
        if(n>0)
        {
            printf("The number %d is positive\n",n);
        }
        else if(n<0){
            printf("The number %d is negative\n",n);
        }
        else{
            printf("The number is zero\n");
        }
    }
}