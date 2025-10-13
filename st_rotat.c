#include <stdio.h>
#include <string.h>

int isRotation(char *str1, char *str2) 
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
        return 0;

    char temp[201];
    strcpy(temp, str1);
    strcat(temp, str1);

    return strstr(temp, str2) != NULL;
}

int main() 
{
    char str1[100], str2[100];
    printf("Enter first string: ");

    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");

    fgets(str2, sizeof(str2), stdin);

    int len1 = strlen(str1);
    
    if (len1 > 0 && str1[len1 - 1] == '\n') 
    str1[len1 - 1] = '\0';

    int len2 = strlen(str2);

    if (len2 > 0 && str2[len2 - 1] == '\n') 
    str2[len2 - 1] = '\0';

    if (isRotation(str1, str2))
        printf("Yes, the second string is a rotation of the first.\n");
    else
        printf("No, the second string is not a rotation of the first.\n");

    return 0;
}