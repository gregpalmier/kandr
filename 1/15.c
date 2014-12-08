/* Rewrite the temperature conversion program of
 * Section 1.2 to use a function for the conversion.
 * Program Exercise 1-3:
 * Print the Fahrenheit-Celsius Table
 * for -200F to 300F in 10 degree steps */
#include <stdio.h>
double convert(int temp){
  double celsius;
  celsius = (5.0/9.0) * (temp-32);
  return celsius;
}
int main(void){
  int fahr;
  int lower, upper, step;
  lower = -200; /* toy with the starting point */
  upper = 300; /* stick with the upper same as lesson */
  step = 10; /* step same as well */
  fahr = lower;
  printf("%3s %6s\n", "F", "C");
  while(fahr <= upper){
    printf("%3.0i %6.1f\n", fahr, convert(fahr));
    fahr = fahr + step;
  }
}
