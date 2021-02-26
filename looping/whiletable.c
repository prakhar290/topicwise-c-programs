#include<stdio.h>
int main()
{
    int number,i,a;
    printf("enter the value of number: ");
    scanf("%d",&number);
    i=1;
    while(i<=10)
    {
        a=number*i;
        i++;
        printf(" %d",a);
    }

  return 0;
    
}
