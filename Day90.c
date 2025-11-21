#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender g;
};

int main() 
{
    char input[20];
    struct Person p;

    // Read input
    printf("Enter the gender :");
    scanf("%s", input);

    // Converting input string to enum
    if (strcmp(input, "MALE") == 0)
        p.g = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.g = FEMALE;
    else
        p.g = OTHER;

    // Print gender
    switch (p.g) 
    {
        case MALE: printf("Male"); break;
        case FEMALE: printf("Female"); break;
        case OTHER: printf("Other"); break;
    }

    return 0;
}
