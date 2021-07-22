#include<stdio.h>
int main()
{
    int a[100][100],b[100][100];
    int r1,c1,i,j,r2,c2;
    printf("enter the size of rows and columns of both the array: ");
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    if(c1==r2)
    { 
    printf("\n enter the elements of first array: ");
    for(i=0;i<r1;i++)
    {   for(j=0;j<c1;j++)
        {   scanf("%d",&a[i][j]);  }   
    }
    printf("\n your first 2d array is:\n");
    for(i=0;i<r1;i++)
    {   for(j=0;j<c1;j++)
        {   printf(" %d",a[i][j]);  } 
        printf("\n");  
    }
    printf("\n enter the elements of second array: ");
    for(i=0;i<r2;i++)
    {   for(j=0;j<c2;j++)
        {   scanf("%d",&b[i][j]);  }   
    }
    
    printf("\n your second 2d array is:\n");
    for(i=0;i<r2;i++)
    {   for(j=0;j<c2;j++)
        {   printf(" %d",b[i][j]);  } 
        printf("\n");  
    }
    printf("\n your 2d array after multiplication is:\n");
    int c[100][100];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            
            c[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                c[i][j] = c[i][j]+a[i][k]*b[k][j];
            }
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
    }
    else 
    printf("\n multiplication is not possible.");
    return 0;
}