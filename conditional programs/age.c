#include <stdio.h>

int main()
{
int a;
printf("enter the age of candidate: ");
scanf("%d",&a);

if(a>18)
 {
   printf("eligible to vote");
 }

else 
 printf("not eligible for voting.");

return 0;
}