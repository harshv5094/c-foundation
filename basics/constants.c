#include <stdio.h>

// NOTE: Here we are defining constant using '#define' tag
// Writing constant in Capital Letters is a convention, not requirement
#define DAYS_IN_YEAR 365

// HACK: Enumeration is also way to declare constants
enum week { SUN, MON, TUE, WED, THU, FRI, SAT };

int main() {
  enum week days;
  days = WED;

  // NOTE: Here we are printing constant in printf.
  printf("%d", DAYS_IN_YEAR);

  // NOTE: Printing plain enum values
  printf("\nMy enum Values %d\n", days);
  return 0;
}
