//Bard simple Calculator
#include <stdio.h>

int main() {
  char operator;
  float first_number, second_number;

  printf("Enter an arithmetic operator (+, -, *, /): ");
  scanf("%c", &operator);

  printf("Enter two numbers: ");
  scanf("%f %f", &first_number, &second_number);

  switch (operator) {
    case '+':
      printf("%f + %f = %f\n", first_number, second_number, first_number + second_number);
      break;
    case '-':
      printf("%f - %f = %f\n", first_number, second_number, first_number - second_number);
      break;
    case '*':
      printf("%f * %f = %f\n", first_number, second_number, first_number * second_number);
      break;
    case '/':
      printf("%f / %f = %f\n", first_number, second_number, first_number / second_number);
      break;
    default:
      printf("Invalid operator.\n");
  }

  return 0;
}

