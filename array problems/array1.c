#include<stdio.h>
int main()
{
    int num[10],sum=0;
    printf("enter ten values to be added: ");
    for(int i=0;i<10;i++)
    scanf("%d",&num[i]);
    
    for(int i=0;i<10;i++)
    {
      sum = sum + num[i];
    }
    printf("\nthe sum of ten number is: %d",sum);
    return 0;

}