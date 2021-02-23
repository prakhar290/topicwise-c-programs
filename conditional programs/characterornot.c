#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character:\n");
    scanf("%c", &ch);
    
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("\nThe character is an alphabet.");
    }
    else
    {
        printf("\nThe character is not an alphabet.");
    }
    return 0;
}
