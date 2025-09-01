#include <stdio.h>
int a,b,c;
int largest;
int main()
{
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        largest=a;
    }
    else if(b>=a && b>=c)
    {
        largest=b;
    }
    else
    {
        largest=c;
    }
}