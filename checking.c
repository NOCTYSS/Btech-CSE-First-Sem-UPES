#include <stdio.h>
 char word;
 int main()
 {
        printf("Enter a character: ");
        scanf("%c", &word);
        word = tolower(word);
        if(word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u')
        {
            printf("%c is a vowel.\n", word);
        }
        else{
            printf("%c is a consonant.\n", word);
        }
 }