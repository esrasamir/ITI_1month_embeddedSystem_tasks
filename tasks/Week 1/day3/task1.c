#include <stdio.h>  
int height ;  // define number of rows 
void pyramid(int height); // prototype 
int main()  
{  
    printf("\n");  // take space line
    printf (" Enter the number of rows: ");  
    scanf ("%d", &height);   // the entry number from user 
    pyramid(height); // call the function
} 

void pyramid(int height){
    
      // for loops to print the shape of stars 
    for (int i =1; i <= height; i++)  
    {  
        for (int j = 1; j <= height - i; j++)  // print the spaces before the stars
        {  
            printf ("  ");   
        }  
        for (int k = 1; k <= ( 2 * i - 1); k++)  // in every row add 2 stars
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");  
    }   
 
}