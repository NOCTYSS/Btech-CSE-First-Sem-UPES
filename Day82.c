#include <stdio.h>
#include <string.h>

enum Traffic {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char input[20];
    enum Traffic light;

    printf("Enter traffic light (RED / YELLOW / GREEN): ");
    scanf("%s", input);

    if (strcmp(input, "RED") == 0)
        light = RED;
    else if (strcmp(input, "YELLOW") == 0)
        light = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        light = GREEN;
    else {
        printf("Invalid input\n");
        return 0;
    }

    if (light == RED)
        printf("Stop\n");
    else if (light == YELLOW)
        printf("Wait\n");
    else if (light == GREEN)
        printf("Go\n");

    return 0;
}
