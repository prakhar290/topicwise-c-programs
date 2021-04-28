#include<stdio.h>
int main()
{
    //program to find every position of the searched number in an array.
    // if array is like 2 1 1 4 1 and the number to find its location is 1 
    //then it should give all the position i.e at index 1, 2 and 5 
    int num,n,i,found=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("\nenter the values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter the number to find its position: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        printf("\nnumber found at %d position.",i);
        found=1;
    }
    if(found==0)
    printf("\n your number is not in the array.");
    return 0;
}