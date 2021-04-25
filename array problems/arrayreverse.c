#include<stdio.h>
int main()
{
    int size,i,j;
    printf("enter the size of array:");
    scanf("%d",&size);
    int a[size];
    printf("\nenter the elements of array: ");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("\nyour numbers in reverse order as you write are:");
    for(j=size-1;j>=0;j--)
    printf(" %d",a[j]);
    return 0;
}