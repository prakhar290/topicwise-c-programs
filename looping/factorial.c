#include<stdio.h>
int main()
{
    int num,fact=1,r=1;
    printf("enter the number of which you want factorial: ");
    scanf("%d", &num);
    while(num>=r)
    {
        fact = fact*r;
        r++;
    }
    printf("the factorial of %d is = %d",num,fact);
    return 0;
}