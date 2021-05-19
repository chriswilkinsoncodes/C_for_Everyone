/* based on The ANSI C Programming Language
   - Kernighan, Ritchie
   p. 15 */

#include <stdio.h>

/* print Fahrenheit to Celsius table */

int main(void)
{
  float fahr, celsius;
  int lower, upper, step;
  int method;

  printf("\nEnter conversion method.");
  printf("\n1. Fahrenheit to Celsius");
  printf("\n2. Celsius to Fahrenheit");
  printf("\n(1 or 2): ");
  scanf("%d", &method);

  printf("\nEnter Start of range: ");
  scanf("%d", &lower);
  printf("Enter End of range: ");
  scanf("%d", &upper);
  printf("Enter Step value: ");
  scanf("%d", &step);
 
  if(method == 1)
	{ 
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
  }

  if(method == 2)
	{ 
		celsius = lower;
		printf("\nCelsius    Fahr.\n");
		printf("----------------\n");
		while (celsius <= upper)
		{
			fahr = (9.0 / 5.0) * celsius + 32.0;
			printf("%7.0f %8.2f\n", celsius, fahr);
			celsius = celsius + step;
		}
		printf("\n");
  }

	return 0;
}
