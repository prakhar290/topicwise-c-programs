#include<stdio.h>
int main()
{
    int num,rem=1;
    printf("enter the number to find it is prime or not: ");
    scanf("%d",&num);
    for(int i=2;i<num/2;i++)
    {    if(num%i==0)
    {
        rem=0;
        break;
    }
    }
    if(rem==0)
    printf("\nthe number is not prime.");
    else
        printf("\n the number is prime number.");
    return 0;
    
}