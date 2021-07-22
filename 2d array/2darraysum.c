#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("\n enter the elements of first array: ");
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
        {   scanf("%d",&a[i][j]);  }   
    }
    printf("\n your first 2d array is:\n");
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
        {   printf(" %d",a[i][j]);  } 
        printf("\n");  
    }
    printf("\n enter the elements of second array: ");
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
        {   scanf("%d",&b[i][j]);  }   
    }
    
    printf("\n your second 2d array is:\n");
    for(i=0;i<3;i++)
    {   for(j=0;j<3;j++)
        {   printf(" %d",b[i][j]);  } 
        printf("\n");  
    }
    printf("\n your 2d array after addition is:\n");
    int add=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            add = a[i][j]+b[i][j];
            printf(" %d",add);
        }
        printf("\n");
    }
    return 0;
}