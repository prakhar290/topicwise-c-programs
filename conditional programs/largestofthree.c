#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if((num1>num2) && (num1>num3))
     printf("\n%d is the greatest of the three numbers.",num1);
    else if((num2>num1) && (num2>num3))
     printf("\n%d is the greatest of the three numbers.", num2);
    else
     printf("\n%d is the greatest of the three numbers.", num3);
    return 0 ;     
}
