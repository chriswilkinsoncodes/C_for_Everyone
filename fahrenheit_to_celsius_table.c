/* based on The ANSI C Programming Language
   - Kernighan, Ritchie
   p. 15 */

#include <stdio.h>

/* print Fahrenheit to Celsius table */

int main(void)
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("\nFahr.  Celsius\n");
  printf("--------------\n");
  while (fahr <= upper)
  {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%5.0f %8.2f\n", fahr, celsius);
    fahr = fahr + step;
  }
  printf("\n");
  return 0;
}
