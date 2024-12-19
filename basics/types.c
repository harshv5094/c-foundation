#include <stdio.h>

int main() {
  // NOTE: ints are usually 4 bytes
  int x_int = 0;
  printf("x_int = %lu\n", sizeof(x_int));

  // NOTE: shorts are usually 2 bytes
  short x_short = 0;
  printf("x_short = %lu\n", sizeof(x_short));

  /*
   * NOTE: Chars are defined by the smallest addressable unit for a processor.
   * This is usually 1 byte, but for some system it can be more.
   */

  char x_char = 0;
  char y_char = 'y'; // HACK: Char literals are quoted with ''
  /*
   * NOTE: chars inside single quotes are integers in machine's character set.
   * '0'; // => 48 in the ASCII character set.
   * 'A'; // => 65 in the ASCII character set.
   */

  printf("x_char = %lu\n", sizeof(x_char));
  printf("y_char = %lu\n", sizeof(y_char));

  /*
   * NOTE: longs are often 4 to 8 bytes;
   * long longs are guaranteed to be at least 8 bytes
   */

  long x_long = 0;
  long long x_long_long = 0;
  printf("x_long = %lu\n", sizeof(x_long));
  printf("x_long_long = %lu\n", sizeof(x_long_long));

  // NOTE: floats are usually 32-bit floating point numbers
  float x_float = 0.0f; // HACK: 'f' suffix here denotes floating point literals
  printf("x_float = %lu\n", sizeof(x_float));

  // NOTE: doubles are usually 64-bit floating point numbers
  double x_double = 0.0; // HACK: real numbers without any suffix are doubles
  printf("x_double = %lu\n", sizeof(x_double));

  // NOTE: Integer type may be unsigned (greater than or equal to zero)
  unsigned short ux_short;
  printf("ux_short = %lu\n", sizeof(ux_short));
  return 0;
}
