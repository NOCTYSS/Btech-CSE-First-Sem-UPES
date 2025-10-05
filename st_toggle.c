#include <stdio.h>

int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            str[i] = str[i] - ('a' - 'A');
        } 
        else if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }

    printf("Toggled case string: %s", str);
    return 0;
}