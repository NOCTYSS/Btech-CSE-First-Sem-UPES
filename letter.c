#include <stdio.h>
#include <ctype.h>

char letter;
int main()
{
    printf("Enter a character: ");
    scanf("%c", &letter);
    if(isupper(letter))
    {
        printf("%c is an uppercase letter.\n", letter);
    }
    else if(islower(letter))
    {
        printf("%c is a lowercase letter.\n", letter);
    }
    else if(isdigit(letter))
    {
        printf("%c is a digit.\n", letter);
    }
    else{
        printf("%c is a special character.\n", letter);
    }
}