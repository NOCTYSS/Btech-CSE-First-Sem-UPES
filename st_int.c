#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];

    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    int printed = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (i == 0 || (str[i - 1] == ' ' && str[i] != ' ')) 
        {
            if (printed > 0)
                printf(".");
            printf("%c", str[i]);
            printed++;
        }
    }
    printf(".\n");
    return 0;
}