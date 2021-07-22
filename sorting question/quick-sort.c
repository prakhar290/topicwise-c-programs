#include<stdio.h>
void swap(int a[],int i,int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int partition(int a[],int beg,int end)
{
    int element = a[end];
    int i=beg-1; 
    for(int j=beg;j<end;j++)
    {
        if(a[j]<element)
        {
            i++;
            swap(a,i,j);
        }
    } 
    swap(a,i+1,end); 
    return i+1;
}
void quicksort(int a[],int beg,int end)
{
    if(beg<end)
    {
        int index = partition(a,beg,end);
        quicksort(a,beg,index-1);
        quicksort(a,index+1,end);
    }
}
int main()
{
    
    int a[10];
    printf("enter the elements of array: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,10);
    printf("your array after quick sort is: ");
    for(int i=0;i<10;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}