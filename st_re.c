#include <stdio.h>
#include <string.h>

void reverse_word(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    char *word_start = str;
    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse_word(word_start, &str[i - 1]);
            if (str[i] == '\0') break;
            word_start = &str[i + 1];
        }
    }

    printf("Sentence with each word reversed: %s\n", str);
    return 0;
}