#include <stdio.h>

int main() {
  /*
   * NOTE: Arrays must be initialized with a concrete size.
   * char my_char_array[20];  /HACK: This array occupies 1 * 20 = 20 bytes
   * int my_int_array[20];  HACK: This array occupies 4 * 20 = 80 bytes
   * (assuming 4 byte words)
   */

  // NOTE: you can initialze an array of twenty ints that all equal 0 thusly:
  int my_array[20] = {0};
  printf("Initializing 20 arrays values to zero:\n");
  for (int i = 0; i < 20; i++) {
    printf("%d ", my_array[i]);
  }
  /*
   * NOTE: where the "{0}" part is called an "array initializer".
   * All the elements (if any) past the ones in the initializer are initialized
   * to 0:
   */
  printf("\nInitializing only 2 numbers in array of size 5:\n");
  int my_array_2[5] = {1, 2};
  for (int i = 0; i < 5; i++) {
    printf("%d ", my_array_2[i]);
  }

  /*
   * HACK: note that you can get away without explicitly declaring the size of
   * the array If you initialize the array on the same line
   */
  int my_array_3[] = {0, 1, 2};
  /*
   * HACK: NOTE that, when not declaring the size, the size of the array is the
   * number of elements in the initializer. With "{0, 1, 2}", my_array_3 is now
   * of size: [2] To evaluate the size of the arrays at a run-time, divide its
   * body size by the byte size of its element type:
   */
  int size_t = sizeof(my_array_3) / sizeof(my_array_3[0]);
  /*
   * WARNING: You should evaluate the size *before* you begin passing the array
   * to functions, because arrays get "downgraded" to raw pointers when they are
   * passed to functions (so the statement above will produce the wrong result
   * inside a function).
   */
  printf("\nInitializing array with the size of the element declared inside an "
         "array:\n");
  for (int i = 0; i < size_t; i++) {
    printf("%d ", my_array_3[i]);
  }

  /*
   * NOTE: Indexing an array is like other languages -- or,
   * rather, other languages are like C
   *  my_array[0]; // => 0
   */

  // NOTE: Arrays are mutable; it's just memory!

  /*
   * HACK:
   * int my_array[1] = 2;
   * printf("%d\n", my_array[1]); // => 2
   */

  /*
   * NOTE: In C99 (as an optional feature in C11), variable-length arrays(VLAs)
   * can be declared as well.
   * The size of such an array need not to be a compile time constant:
   */
  printf("\nEnter the array size: ");
  int array_size;
  fscanf(stdin, "%d", &array_size);
  int var_length_array[array_size];
  printf("sizeof array = %zu\n", sizeof var_length_array);

  /*
   * HACK: Example
   * Enter the array size: 10
   * sizeof array = 40
   */

  /*
   * NOTE: Strings are just arrays of chars terminated by NULL (0x00) byte,
   * represented in strings as the special character '\0'
   * (We don't have to include the NULL byte in string literals; the compiler
   * inserts it at the end of the array for us.)
   */

  char a_string[20] = "This is a string";
  printf("%s\n", a_string);

  printf("%d\n", a_string[17]);
  // i.e., byte #17 is 0 (as are 18, 19 and 20)

  /*
   * NOTE: If we have characters between single quotes, that's a character
   * literals. It's of type `int` and *not* in `char` (for historical reasons).
   * int cha = 'a'; //fine
   * int chb = 'a'; // fine too (implicit conversion from int to char)
   */

  // Multi-dimensional arrays:
  int multi_array[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};

  // access element:
  int array_int = multi_array[0][2]; // => 3
  printf("%d", array_int);

  return 0;
}
