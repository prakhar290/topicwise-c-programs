#include<stdio.h>
int main ()
{
int a[100];
int n,i,j, k,temp;
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("\nEnter elements of array : ");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("\nArray is :\n");
for(i=0;i<n;i++)
{
    printf(" %d",a[i]);
}
for(i=1;i<n;i++)
{
    int current = a[i];
    j = i-1;
    while(a[j]>current && j>=0)
    {
        a[j+1] = a[j];
        j--;
    }
    a[j+1] = current;
}
printf("\nSorted Array is :\n");
for(i=0;i<n;i++)
{
    printf(" %d",a[i]);
}
return 0;
}
