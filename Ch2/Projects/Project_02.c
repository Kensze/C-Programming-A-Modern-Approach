/* Name: Project02
 * Purpose: Compute the volume of a 10 meter radius sphere using the formula v = 4/3(pi)*r^3
 * Autohor K Sze
 */

#include <stdio.h>
#define RADIUS 10

int main(void)
{
  float volume;

  volume = ((4.0f/3.0f) * 3.1415 * (RADIUS * RADIUS * RADIUS));
  printf("Volume of a 10 meter radius sphere is: %.2f\n", volume);


  return 0;
}
