/* Marathon in kilometres
- from C for Everyone: Programming Fundamentals - Week 1
- coursera.org */

#include <stdio.h>

int main()
{
  int miles = 26, yards = 385;
  float kilometres;

  /* use 1760.0 to cast to float; otherwise int/int will return 0; e.g. 385/1760 */
  kilometres = 1.609 * (miles + yards / 1760.0);
  printf("\nA marathon is %f kilometres.\n\n", kilometres);
  return 0;
}
