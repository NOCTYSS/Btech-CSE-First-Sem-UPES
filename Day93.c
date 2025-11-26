#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() 
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n], topper;

    for (int i = 0; i < n; i++) 
    {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);

        if (i == 0 || s[i].marks > topper.marks) 
        {
            topper = s[i];
        }
    }

    printf("\nTopper: %s (Marks: %d)\n", topper.name, topper.marks);

    return 0;
}
