#include<stdio.h>
int main()
{
    int n,i,pos;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int ar[n];
    printf("\n enter the elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    printf("\n your array is: ");
    for(i=0;i<n;i++)
    printf("  %d",ar[i]);
    printf("\n enter the postion of element you want to delete: ");
    scanf("%d",&pos);
    if(pos>n)
    printf("\n cannot delete the number as position is wrong");
    for(i=pos-1;i<n-1;i++)
    {
        ar[i]=ar[i+1];
    }
    if(pos>0 && pos<n)
    {
        printf("\n array after deletion is: ");
        for(i=0;i<n-1;i++)
        printf(" %d",ar[i]);
    }
    else
    {
        printf("\n your array is: ");
    for(i=0;i<n;i++)
    printf("  %d",ar[i]);
    }
    

   return 0;
}