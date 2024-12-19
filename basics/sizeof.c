#include <stdio.h>

int main() {
  /*
   * NOTE: sizeof(T) gives you the size of a variable with type T in bytes
   * sizeof(obj) yields the size of the expression (variable, literal, etc.)
   */
  printf("%zu\n", sizeof(int)); // HACK: 4 (on most machines with 4-byte words)

  /*
   * NOTE: If the argument of the `sizeof` operator is an expression, then its
   * argument is not evaluated (except VLAs (see below)).
   * The value it yields in this case is a compile-time constant.
   */
  int a = 1;
  /*
   * HACK: size_t is an unsigned integer type of at least 2 bytes used to
   * represent the size of an object.
   */
  size_t size = sizeof(a++);
  printf("sizeof(a++) = %zu where a = %d\n", size, a);
  // NOTE: prints "sizeof(a++) = 4 where a = 1" (on a 32-bit architecture)

  return 0;
}
