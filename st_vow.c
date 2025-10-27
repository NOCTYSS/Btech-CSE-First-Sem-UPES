#include <stdio.h>
#include <ctype.h>

int main() 
{
    char str[100];
    int vow= 0, cons = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') 
    {
        char ch = tolower(str[i]);
        if (isalpha(ch)) 
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vow++;
            else
                cons++;
        }
        i++;
    }

    printf("Vowels: %d\n", vow);
    printf("Consonants: %d\n", cons);
    return 0;
}