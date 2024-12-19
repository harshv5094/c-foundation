#include <stdio.h>

int main() {
  int input;

  printf("Enter a Number: ");

  /*
   * NOTE: scanf takes input from user, '&' is used to define the location
   * HACK: here 'input' is variable name of the location.
   * and '&input' is the actual location where you actually store value.
   * NOTE: "%d" specifies that the value is integer
   */
  scanf("%d", &input);

  /*
   * NOTE: To print the value taken by user we use 'printf' function.
   * HACK: here '%d' specifies the output value is integer.
   * To print the value inside a variable, just write the name of the variable
   * 'input'
   */
  printf("Number entered through scanf is: %d", input);
  return 0;
}
