#include<stdio.h>
int main()
{
    int ar[10];
    printf("enter any ten elements: ");
    
    for(int i=0;i<10;i++)
    scanf("%d",&ar[i]);
    
    printf("\n your ten numbers are: ");
    
    for(int i=0;i<10;i++)
    printf(" %d",ar[i]);
    
    return 0;
}