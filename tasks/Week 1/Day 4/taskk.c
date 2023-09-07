#include<stdio.h>
char swap_arrays(char x[] , char y[]);
int main()
{
    int i;
    char ch_arr1[10] = {'M','o','h','a','m','e','d','\0'};
    char ch_arr2[10] = {'A','h','m','e','d','\0'};
    printf("\n the orignal arrays \n\n");   
    printf(" string1 = %s \n" , ch_arr1 );
    printf(" string2 = %s" , ch_arr2 );

    swap_arrays(ch_arr1 , ch_arr2);
    return 0;
}
char swap_arrays(char x[] , char y[])
{
    char temp[10];
    int i;
    for( i=0 ; x[i]!='\0' ; i++)
    {
        temp[i] = x[i];
    }
        temp[i] = '\0';
    
    for( i=0 ; y[i]!='\0' ; i++)
    {
        x[i] = y[i];
    }
        x[i] = '\0';
    
    for( i=0 ; temp[i]!='\0' ; i++)
    {
        y[i] = temp[i];
    }
        y[i] = '\0';

    printf("\n\n the swapped arrays \n");   
    printf("\n first array= %s" , x );
    printf("\n second array= %s \n" , y );
}