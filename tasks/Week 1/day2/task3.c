#include <stdio.h>

int main() {

  char op; // define the sign of the operation
  double F , S; // define the First and Second operands 
  printf("\n");  // take space line
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op); // to receive the operator from the user
  printf("Enter two operands: ");
  scanf("%lf %lf", &F, &S); // to receive the numbers from the user
  printf("\n");  // take space line


  switch (op) {
    
    case '+':
      printf("%.1lf + %.1lf = %.1lf", F, S, F + S);
      break;

    case '-':
      printf("%.1lf - %.1lf = %.1lf", F, S, F - S);
      break;

    case '*':
      printf("%.1lf * %.1lf = %.1lf", F, S, F * S);
      break;

    case '/':
      printf("%.1lf / %.1lf = %.1lf", F, S, F / S);
      break;

   
    default:
      printf("Wrong Operator! try agin with right Operator ");
      break;
  }
    printf("\n");  // take space line

  return 0;
}