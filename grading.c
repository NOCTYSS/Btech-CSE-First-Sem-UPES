#include <stdio.h>
#include <string.h>
int score;
char grade;
int main()
{
    printf("Enter the score (0-100): ");
    scanf("%d",&score);
    if(score >= 90 && score <= 100)
    {
        grade = 'A';
        printf("Grade: %c\n", grade);
    }
    else if(score >= 80 && score < 90)
    {
        grade = 'B';
        printf("Grade: %c\n", grade);
    }
    else if(score >= 70 && score < 80)
    {
        grade = 'C';
        printf("Grade: %c\n", grade);
    }
    else if (score >= 60 && score < 70)
    {
        grade = 'D';
        printf("Grade: %c\n", grade);   
    }
    else{
        grade = 'F';
        printf("Grade: %c\n", grade);
    }
}