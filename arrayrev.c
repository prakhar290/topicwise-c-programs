#include<stdio.h>
int main()
{
    int n;
    int ar[n];
    printf("enter your lengrh of array: ");
    scanf("%d",&n);
    printf("\n enter the elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);

    printf("\nreverse of array: ");
    for(int i=n-1;i>=0;i--)
    printf(" %d", ar[i]);

    return 0;
}