#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("enter the size of rows and columns: ");
    scanf("%d %d",&row,&col);
    int a[row][col];
    printf("\n enter the elements of array: ");
    for(i=0;i<row;i++)
    {   for(j=0;j<col;j++)
        {   scanf("%d",&a[i][j]);  }   
    }
    printf("\n your 2d array is:\n");
    for(i=0;i<row;i++)
    {   for(j=0;j<col;j++)
        {   printf(" %d",a[i][j]);  } 
        printf("\n");  
    }
    return 0;
}