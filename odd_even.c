#include <stdio.h>
int n=0;
int main(){
    printf("Enter the number to check odd or even: ");
    if(scanf("%d",&n) !=1)
    {
        printf("Invalid input . Please enter an integer.\n");
        return 1; // Exit the program with an error code
    }
    else{
        if(n%2 ==0)
        {
            printf("The number %d is even\n",n);
        }
        else{
            printf("The number %d is odd\n",n);
        }
    }
}