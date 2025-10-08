#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';

    int max_len = 0, curr_len = 0, start = 0, max_start = 0;
    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            if (curr_len == 0) start = i;
            curr_len++;
        } else {
            if (curr_len > max_len) {
                max_len = curr_len;
                max_start = start;
            }
            curr_len = 0;
            if (str[i] == '\0') break;
        }
    }

    printf("Longest word: ");
    for (int i = max_start; i < max_start + max_len; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}