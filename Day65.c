#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1001], t[1001];
    if (fgets(s, sizeof(s), stdin) == NULL) return 0;
    if (fgets(t, sizeof(t), stdin) == NULL) return 0;

    size_t n = strlen(s);
    if (n > 0 && s[n - 1] == '\n') s[n - 1] = '\0';
    n = strlen(t);
    if (n > 0 && t[n - 1] == '\n') t[n - 1] = '\0';

    int len1 = strlen(s), len2 = strlen(t);
    if (len1 != len2) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0};
    for (int i = 0; i < len1; i++) {
        if (s[i] < 'a' || s[i] > 'z' || t[i] < 'a' || t[i] > 'z') {
            printf("Not Anagram\n");
            return 0;
        }
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
```// filepath: c:\Code\C\Btech-CSE-First-Sem-UPES\Day65.c
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1001], t[1001];
    if (fgets(s, sizeof(s), stdin) == NULL) return 0;
    if (fgets(t, sizeof(t), stdin) == NULL) return 0;

    size_t n = strlen(s);
    if (n > 0 && s[n - 1] == '\n') s[n - 1] = '\0';
    n = strlen(t);
    if (n > 0 && t[n - 1] == '\n') t[n - 1] = '\0';

    int len1 = strlen(s), len2 = strlen(t);
    if (len1 != len2) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0};
    for (int i = 0; i < len1; i++) {
        if (s[i] < 'a' || s[i] > 'z' || t[i] < 'a' || t[i] > 'z') {
            printf("Not Anagram\n");
            return 0;
        }
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}