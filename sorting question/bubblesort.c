#include<stdio.h>
int main()
{
    int a[100],n,i,j,max;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("\n enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n your array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                max=a[j];
                a[j]=a[j+1];
                a[j+1]=max;
            }
        }
    }
    printf("\n your array after bubble sorting is: ");
    for(i=0;i<n;i++)
    printf(" %d",a[i]);
    return 0;
}