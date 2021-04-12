#include<stdio.h>
int main()
{
    int a=300,b,c;
    if(a>=400)
    b=300;
    c=200;
    printf("%d  %d",b,c);
    return 0;
}




//EXPLANATION//

/*here the if condition does not work because a is not greater than 400 
so the statement next to if condition did not get executed due to which 
b did not get any value it holds only garbage value so when you execute 
the program you will get a garbage value and the value of c as 200*/ 