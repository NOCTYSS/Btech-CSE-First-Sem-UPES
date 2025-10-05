#include <stdio.h>
#include <ctype.h>

int main() 
{
    char str[100], result[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, j = 0;
    while (str[i] != '\0' && str[i] != '\n') 
    {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            i++;
            continue;
        }
        else
        {
            result[j] = str[i];
        }
        i++;
        j++;
    }

    printf("String after removing vowels: %s\n", result);
    return 0;
}