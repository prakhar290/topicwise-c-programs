#include<stdio.h>
int main()
{
    float far,cel;
    printf("enter the temprature in farenhiet: ");
    scanf("%f", &far);
    cel=(far-32)*5/9;
    printf("\n the temprature in celsius is = %d",cel);
    return 0;
}