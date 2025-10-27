#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(const char *s) {
    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;
    int maxlen = 0, start = 0;
    for (int i = 0; s[i]; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) start = last[c] + 1;
        last[c] = i;
        int len = i - start + 1;
        if (len > maxlen) maxlen = len;
    }
    return maxlen;
}

int main(void) {
    char s[1001];
    if (fgets(s, sizeof(s), stdin) == NULL) return 0;
    int n = strlen(s);
    if (n > 0 && s[n - 1] == '\n') s[n - 1] = '\0';
    printf("%d\n", lengthOfLongestSubstring(s));
    return 0;
}