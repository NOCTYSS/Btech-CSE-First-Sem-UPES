#include <stdio.h>
#include <math.h>
int num, power, temp;
float arm_num;
int main()
{
    printf("Enter the number you want to check: ");
    scanf("%d",&num);
    temp=num;
    power=0;
    if(num < 0) 
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    while(temp != 0)
    {
        temp=temp/10;
        power+= 1;
    }
    int temp2=num;
    arm_num=0.0;
    while(temp2 != 0)
    {
        int digit=temp2 % 10;
        arm_num = arm_num + pow(digit,power);
        temp2=temp2 / 10;
    }
    if(arm_num == num)
        printf("%d is an Armstrong number\n",num);
    else
        printf("%d is not an Armstrong number\n",num);
    return 0;
}
//Checking whether a number is an Armstrong number or not
