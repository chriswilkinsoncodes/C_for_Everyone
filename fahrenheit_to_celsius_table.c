/* based on The ANSI C Programming Language
   - Kernighan, Ritchie
   p. 15 */

#include <stdio.h>

/* print Fahrenheit to Celsius table */

int main(void)
{
  float fahr, celsius;
  int lower, upper, step;

  printf("\nEnter Start of range: ");
  scanf("%d", &lower);
  printf("Enter End of range: ");
  scanf("%d", &upper);
  printf("Enter Step value: ");
  scanf("%d", &step);
  
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
