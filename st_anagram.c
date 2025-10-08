#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline if present
    int len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') str1[len1 - 1] = '\0';
    int len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') str2[len2 - 1] = '\0';

    // Count frequency of each character
    for (int i = 0; str1[i] != '\0'; i++) {
        freq1[(unsigned char)str1[i]]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        freq2[(unsigned char)str2[i]]++;
    }

    // Compare frequency arrays
    int is_anagram = 1;
    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            is_anagram = 0;
            break;
        }
    }

    if (is_anagram)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}