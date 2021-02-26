#include<stdio.h>
int main()
{
    int num,r,rem=0,sum=0;
    printf("enter any number to find the sum of its digits: ");
    scanf("%d", &num);
    r=num;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        sum = sum+rem;
    }
    printf("\nthe sum of the digits of your number %d is = %d", r, sum);
    return 0;
}