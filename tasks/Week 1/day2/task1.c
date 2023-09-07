#include <stdio.h>  
int main()  
{  
    int rows , v=1;  // define number of rows and the value of the rows
    printf("\n");  // take space line
    printf (" Enter the number of rows: ");  
    scanf("%d", &rows);   // to take the number of rows from the user 
    printf("\n");  // take space line

    for (int i = 1; i <= rows; ++i)   //to make the number of the rows 
    {  
        for (int j = 1; j <= i; ++j)  //nested for to print the numbers in the shape
        {  
            printf ("%d ", v);
            v +=1;                    // to +1 every value 
        }  
        printf ("\n");   
    }  
}  