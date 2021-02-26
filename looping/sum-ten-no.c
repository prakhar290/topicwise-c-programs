#include<stdio.h>
int main()
{
    int i,sum=0,num;
    for(i=0;i<10;i++)
    {
        printf("enter number %d = ", i+1);
        scanf("%d", &num);
        sum = sum+num;
    }
    printf("\nthe sum is = %d", sum);
    return 0;
}