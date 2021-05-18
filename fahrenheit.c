
/* Fahrenheit to Celsius 
- from C for Everyone: Programming Fundamentals - Week 1
- coursera.org */

#include <stdio.h>

int main()
{
  int fahrenheit, celsius;

  printf("Please enter fahrenheit as an integer: ");
  scanf("%d", &fahrenheit);
  celsius = (fahrenheit - 32)/1.8; //note conversion
  printf("\n%d Fahrenehit is %d Celsius.\n", fahrenheit, celsius);
  return 0;
}
