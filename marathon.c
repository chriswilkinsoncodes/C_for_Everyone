/* Marathon in kilometres
- from C for Everyone: Programming Fundamentals - Week 1
- coursera.org */

#include <stdio.h>

int main()
{
  int miles = 26, yards = 385;
  double kilometres;

  /* use 1760.0 to cast to double; otherwise int/int will return 0 */
  kilometres = 1.609 * (miles + yards / 1760.0);
  printf("\nA marathon is %lf kilometres.\n\n", kilometres);
  return 0;
}
