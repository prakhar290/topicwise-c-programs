#include<stdio.h>
int main()
{
    int n,num,pos,i,j;
    printf("enter the size of an array: ");
    scanf("%d",&n);
    int a[n];
    printf("\n enter the elements of array: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n your array is: ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

    printf("\nenter the element you want to add: ");
    scanf("%d",&num);
    printf("\nenter the position at which you want to add the element: ");
    scanf("%d",&pos);
    n++;
    for(i=pos;i<n;i++)
    {
        a[i+1]=a[i];
        a[pos]=num;
    }
    printf("\n your array after inserting your element is: ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

    return 0;
}