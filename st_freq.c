#include <stdio.h>

int main() 
{
    char str[100], ch;
    int freq = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') 
    {
        if (str[i] == ch)
            freq++;
        i++;
    }

    printf("%d\n", freq);
    return 0;
}