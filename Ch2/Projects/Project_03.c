/* Name: Project03
 * Purpose: Compute the volume of a sphere using the formula v = 4/3(pi)*r^3
 * Autohor K Sze
 */

#include <stdio.h>

int main(void)
{
  float volume, radius;
  printf("Enter radius: ");
  scanf("%f", &radius);

  volume = ((4.0f/3.0f) * 3.1415 * (radius * radius * radius));
  printf("Volume of a 10 meter radius sphere is: %.2f\n", volume);


  return 0;
}
