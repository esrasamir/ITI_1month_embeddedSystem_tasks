#include <stdio.h>
#include <stdbool.h>

int main ()
{
    int weekNum; // week number
    printf("\n");  // take space line
    printf("Enter week number "); 
    scanf("%d" , &weekNum); // getting value from user 
    printf("\n");  // take space line
    /* switch (condition) 
     case (const) 
     default: instruction if no case happened */
    switch(weekNum){ 

        case 1:    
        printf(" Saturday"); 
        break;   

        case 2:    
        printf(" Sunday"); 
        break;  

        case 3:    
        printf(" Monday"); 
        break;
        case 4:

        printf(" Tuesday"); 
        break;  

        case 5:    
        printf(" Wednesday"); 
        break;  

        case 6:    
        printf(" Thursday"); 
        break;
        
        case 7:    
        printf(" Friday"); 
        break;
        
        // that code if the entry not match any cases above 
        default:     
        printf("wrong number please write number 1 : 7 and try agin");
        break; 
    }    

}