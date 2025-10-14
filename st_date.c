#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    int len = strlen(date);
    if (len > 0 && date[len - 1] == '\n')
        date[len - 1] = '\0';

    char dd[3], yyyy[5];
    // Extract day and year
    strncpy(dd, date, 2);
    dd[2] = '\0';
    strncpy(yyyy, date + 6, 4);
    yyyy[4] = '\0';

    printf("Formatted date: %s-Apr-%s\n", dd, yyyy);
    return 0;
}