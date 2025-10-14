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

    int last_space = -1;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ')
            last_space = i;
    }

    // Print initials
    for (int i = 0; i < len; i++) 
    {
        if (i == 0 || (str[i - 1] == ' ' && str[i] != ' ')) 
        {
            if (i > 0 && i <= last_space)
                printf(".");
            if (i < last_space)
                printf("%c", str[i]);
        }
    }

    // Print surname in full
    if (last_space != -1) 
    {
        printf(".");
        printf("%s\n", &str[last_space + 1]);
    } 
    else 
    {
        printf("\n");
    }

    return 0;
}