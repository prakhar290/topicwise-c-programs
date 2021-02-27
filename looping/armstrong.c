#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,sum=0;
    printf("enter the number to find it is armstrong or not: ");
    scanf("%d",&num);
    int check =num;
    while(num>0)
    {
        rem = num%10;
        num= num/10;
        sum = sum + pow(rem,3);
    }
    if(sum==check)
    {
        printf("\n the number is armstrong.");
    }
    else
    {
        printf("\n the number is not armstrong number.");
    }
    return 0;
    
}