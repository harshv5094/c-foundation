// NOTE: We use #include to import header file. We always declare system defined
// header using <>
#include <stdio.h>

// HACK: To use user defined header files you need to use "" instead of <>
#include "headers/add.h"

int main() {
  char harsh[] = "Hello World";
  // NOTE: We are using printf which is a standard function from the C header
  // library <stdio.h>
  printf("%s", harsh);

  /*
   * HACK: Here we are using a custom made header in
   * 'headers' directory name 'add.h'
   */
  int x = 20;
  int y = 2;
  printf("Addition of %.2d and %.2d = %.2d\n", x, y, add(x, y));
  return 0;
}
