#include<stdio.h>
int main()
{
int n,i,j;
printf("Enter number of elements :");
scanf("%d",&n);
int a[n];
printf("Enter elements of array : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nyour array is :\n");
for( i=0;i<n;i++)
{
printf(" %d",a[i]);
}
int temp;
for(i=0;i<n;i++ )
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("\nSorted Array is : \n");
for(i=0;i<n;i++)
{
printf(" %d",a[i]);
}
return 0;
}