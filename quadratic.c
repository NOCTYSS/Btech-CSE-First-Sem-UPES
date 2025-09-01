#include <stdio.h>
#include <math.h>
int a,b,c;
int main(){
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d",&a,&b,&c);
    int discriminant = b*b - 4*a*c;
    if(discriminant > 0){
        float root1 = (-b + sqrt(discriminant)) / (2*a);
        float root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    }
    else if(discriminant == 0){
        float root = -b / (2*a);
        printf("Roots are real and the same.\n");
        printf("Root: %.2f\n", root);
    }
    else{
        printf("Roots are complex and different.\n");
        float realPart = -b / (2*a);
        float imagPart = sqrt(-discriminant) / (2*a);
        printf("Root 1: %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2: %.2f - %.2fi\n", realPart, imagPart);
    }
}
