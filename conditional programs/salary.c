//write a program to give/deduct extra salary accoridng to employer's salary

#include<stdio.h>
int main()
{
    int a;
    int s;
    printf("enter the salary: ");
    scanf("%d", &a);
    printf("do smoking then enter 1: ");
    scanf("%d", &s);
    if(s==1)
    {
        if(a<=10000)
        {
            a = a - (a*10/100);
            printf("your salary been deducted by 10%");
            printf("\n now your salary is: %d",a);
        }
        else if(a>10000)
        {
            a = a - (a*15/100);
            printf("your salary been deducted by 15%");
            printf("\n now your salary is: %d",a);
        }
    }
    else
    {
        if(a<=10000)
        {
            a = a + a*10/100;
            printf("your salary been increased by 10%");
            printf("\n now your salary is: %d",a);
        }
        else if(a>10000)
        {
            a = a + a*15/100;
            printf("your salary been increased by 15%");
            printf("\n now your salary is: %d",a);
        }
    }
    return 0;
}