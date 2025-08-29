#include <stdio.h>
int hours, minutes, seconds, total_seconds;
int main() {
    printf("Enter hours, minutes and seconds: ");
    if(scanf("%d %d %d", &hours, &minutes, &seconds) != 3 || hours < 0 || minutes < 0 || seconds < 0 || minutes >= 60 || seconds >= 60) {
        printf("Invalid input. Please enter non-negative integers for hours, minutes (0-59), and seconds (0-59).\n");
        return 1; // Exit the program with an error code
    }
    total_seconds = (hours * 3600) + (minutes * 60) + seconds;
    printf("Total time in seconds: %d\n", total_seconds);
    return 0;
}