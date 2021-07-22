#include<stdio.h>

void merge(int a[],int beg,int mid,int end)
{
    int i,j,l,r,k=0;
    l = mid+1;
    r = end-mid;
    int larr[l],rarr[r]; 
    for(i=0;i<l;i++)
    {
        larr[i]=a[i];
    }
    for(j=0;j<r;j++)
    {
        rarr[j]=a[mid+j+1];
    }
    i=0;
    j=0;
    while(i<l && j<r)
    {
        if(larr[i]<rarr[j])
        {
            a[k]=larr[i];
            i++;
        }
        else 
        {
            a[k]=rarr[j];
            j++;
        }
        k++;
    }
    if(i<l)
    {
        while(i<l)
        {
            a[k]=larr[i];
            i++;
            k++;
        }
    }
    if(j<r)
    {
        while(j<r)
        {
            a[k]=rarr[j];
            j++;
            k++;
        }
    }
}
void dividearray(int a[],int beg,int end)
{
    if(beg==end)
    {
        return; 
    }
    int mid = (beg+end)/2;
    dividearray(a,beg,mid);
    dividearray(a,mid+1,end);
    merge(a,beg,mid,end);
}
int main()
{
    
    int a[100];
    int n,i;
    printf("enter the size of array: ");
    scanf("%d",&n);
    printf("enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int beg=0,end=n-1;
    dividearray(a,beg,end);
    printf("your sorted array is: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}