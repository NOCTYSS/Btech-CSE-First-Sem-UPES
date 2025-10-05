#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, found = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int idx = str[i] - 'a';
            freq[idx]++;
            if (freq[idx] == 2) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break;
            }
        }
        i++;
    }
    if (!found) {
        printf("No repeating lowercase alphabet found.\n");
    }
    return 0;
}