#include<stdio.h>
/* print the Fahrenheit-Celsius Table
 * for -200F to 300F in 10 degree steps */
main(){
  float fahr, celsius;
  int lower, upper, step;
  lower = -200; /* toy with the starting point */
  upper = 300; /* stick with the upper same as lesson */
  step = 10; /* step same as well */
  fahr = lower; 
  printf("%3s %6s\n", "F", "C");
  while(fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
