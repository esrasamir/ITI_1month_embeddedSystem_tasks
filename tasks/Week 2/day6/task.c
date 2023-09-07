#include <stdio.h>
#include "std_int.h"
int main (){
int8_t x = 15; int8_t y = 22 ; 

int8_t *const ptr1 = &x;
int8_t **ptr2 = &ptr1;

printf("x before hack = %p\n" , ptr1);
printf("x before hack = %p\n" , *ptr2);

*ptr2 = &y;
printf("x after hach %p\n" , &y);
printf("x after hach %p" , ptr1);

}