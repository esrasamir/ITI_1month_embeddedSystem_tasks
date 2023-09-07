#include <stdio.h>  
int main()  
{  
  	int x , y , z ; // define the variables 
    printf("\n"); // make space above to make little format
    printf(" Please Enter number a ");
    scanf("%d" , &x); // take the value of a
    printf(" Please Enter number b ");
    scanf("%d" , &y); // take the value of b
    printf("\n"); // make space under to make little format
// space before the operations to make format 
   z = x+y;    // sum op     
   printf("     a + b  = %d\n", z );
   z = x-y;    // sub op     
   printf("     a - b  = %d\n", z );
   z = x&y;    // AND op    
   printf("     a & b  = %d\n", z );
   z = x|y;    // OR op      
   printf("     a | b  = %d\n", z );
   z = x^y;    // XOR op     
   printf("     a ^ b  = %d\n", z);
   z = x&&y;   // logical op AND     
   printf("     a && b = %d\n", z );
   z = x||y;   // logical op OR     
   printf("     a || b = %d\n", z);
   z = x*y;    // multibly op 
   printf("     a * b  = %d\n", z );
   z = x/y;    // devision op    
   printf("     a / b  = %d\n", z);
   z = x%y;    // reminder op    
   printf("     a %c b  = %d\n",'%' , z); // %c and % in this format to print % 
return 0;
}