#include<stdio.h>
int main()
{
    char a;
    printf("enter a character: ");
    scanf("%c", &a);
    switch(a)
    {
        case 'a': printf("this is a vowel");
                  break;
        case 'A': printf("this is a vowel");
                  break;
        case 'e': printf("this is a vowel");
                  break;
        case 'E': printf("this is a vowel");
                  break;
        case 'i': printf("this is a vowel");
                  break;
        case 'I': printf("this is a vowel");
                  break;
        case 'o': printf("this is a vowel");
                  break;
        case 'O': printf("this is a vowel");
                  break;
        case 'u': printf("this is a vowel");
                  break;
        case 'U': printf("this is a vowel");
                  break;
        default : printf("this is not a vowel");
    

    }
 return 0;
}