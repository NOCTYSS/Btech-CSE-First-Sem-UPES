#include <stdio.h>

int main() 
{
    char str[100];
    int spaces = 0, digits = 0, specials = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') 
    {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'))
            specials++;
        i++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specials);
    return 0;
}