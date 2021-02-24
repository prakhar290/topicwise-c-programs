             #include<stdio.h>
                    int main ()
 {
               float num1, num2;
               int ch;
     
     printf ("Enter number 1 = ");
     scanf ("%f”, &num1);
     printf ("Enter number 2 = ");
     scanf ("%f”, &num2);

     printf ("1. Addition \n 2. Subtract \n 3. Multiplication \n 1=4. Division ");
     printf ("\nEnter your choice =");
     scanf ("%d”, &ch);

     switch(ch)
     {
         case 1: printf ("Addition is = %.1f”, num1+num2); 
         break; 
         case 2: printf ("Subtraction is = %.1f”, num1-num2); 
         break;
         case 3: printf ("Multiplication is = %.1f”, num1*num2);
         break;
         case 4: printf ("Division is = %.2f”, num1/num2);
         break;
          default: printf ("Wrong Choice. ");     
     }
   return 0;
} 
