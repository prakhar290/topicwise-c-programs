#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *marks = (int*)calloc(n,sizeof(int));
    printf("enter the size of array of marks: ");
    scanf("%d",&n);
    printf("\nyour memory allocation by using calloc is: ");
    for(int i=0;i<n;i++)
    printf(" %d",(marks+i));
    printf("\n enter the marks of array: ");
    for(int i=0;i<n;i++)
    scanf("%d",(marks+i));
    printf("\n your array after using calloc is: ");
    for(int i=0;i<n;i++)
    printf(" %d",*(marks+i));
    return 0;
}