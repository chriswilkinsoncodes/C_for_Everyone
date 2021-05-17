/* Area of Circle
   - example from C for Everyone: Programming Fundamentals - Week 1
   - coursera.org */

#include <stdio.h>

#define PI 3.14159

int main()
{
  double area, radius;
  printf("Enter radius: ");
  scanf("%lf",&radius);
  area = PI * radius * radius;
  printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);
  return 0;
}
 
