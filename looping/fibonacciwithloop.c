#include<stdio.h>
int main()
{
    int first=0,second=1,third,i,n;
    printf("enter the size of series: ");
    scanf("%d",&n);
    printf("/nyour series is: ");
    printf("%d %d",first,second);
    for(i=2;i<n;i++)
    {
        third = first+second;
        printf(" %d",third);
        first = second;
        second = third;
    }
    return 0;
}