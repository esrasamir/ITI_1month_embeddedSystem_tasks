#include <stdio.h>

int main ()
{
	// that line to take places in memory to this variable 
    int num1 , num2 , num3;
    // that line to keep space up the output 
    printf("\n");
    // the 6 lines below to enter the 3 values  
    printf("   Please Enter Number 1: ");
	scanf("%d" , &num1);
    printf("   Please Enter Number 2: ");
	scanf("%d" , &num2);
    printf("   Please Enter Number 3: ");
	scanf("%d" , &num3);
    // that line to keep space between the entry and the print values  
    printf("\n");
    // the 3 lines to print the 3 values but in reversed order 
    printf("   Please Enter Number 3: %d\n", num3);
    printf("   Please Enter Number 2: %d\n", num2);
    printf("   Please Enter Number 1: %d\n", num1);

    return 0;
}