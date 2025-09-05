#include<stdio.h>
int main()
{
    int num,temp;
    printf("Enter the number to check palindrome: ");
    scanf("%d", &num);
    temp = num;
     if(num < 0)
    {
        printf("Negative numbers are not palindromes.\n");
        return 0;
    }
    int rev =0;
    while(temp != 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if( rev == num)
    {
        printf("%d is a palindrome number\n", num);
    }
    else{
        printf("%d is not a palindrome number\n", num);
    }
    return 0;

}