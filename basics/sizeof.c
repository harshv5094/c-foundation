#include <stdio.h>

int main() {
  /*
   * NOTE: sizeof(T) gives you the size of a variable with type T in bytes
   * sizeof(obj) yields the size of the expression (variable, literal, etc.)
   */
  printf("%zu\n", sizeof(int)); // HACK: 4 (on most machines with 4-byte words)
  return 0;
}
