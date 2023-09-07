#include <stdio.h>  
int  Num , Power ; // define base and the power
int  Answer = 1;  // initilaze the answer 
int Num_Power(int Num , int Power); // prptotype 

int main()  
{  
    printf("\n");  // take space line

    printf (" Enter the Number: ");  
    scanf ("%d", &Num);   //enter the base
    
    printf (" Enter the Power: ");  
    scanf ("%d", &Power);   //enter the power 

    Num_Power(Num , Power); // call the function

} 
// implementation the function
int Num_Power(int Num , int Power){
    // the num * its self the same number of the power 
    while (Power != 0) {
        Answer *= Num ;
        --Power;
    }   
    printf("Answer = %d", Answer); // print the answer

}