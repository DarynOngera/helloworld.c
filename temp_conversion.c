#include <stdio.h>

/* print fahreinheit-celcius table 
 * for fahr = 0, 20, ....300
 */

int main() {
  float fahr, celcius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celcius = (5.0 / 9.0) * (fahr - 32.0);
    printf("fahreinheit:\t%3.0f\tcelcius:\t%6.1f\n", fahr, celcius);
    fahr = fahr + step;
  }
}
