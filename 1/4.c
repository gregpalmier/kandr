/* Write a program to print the corresponding 
 * Celsius to Fahrenheit table */
#include <stdio.h>
main(){
  float fahr, celsius;
  int step, lower, upper;
  step = 5; /* change up the step */
  lower = -200;
  upper = 300;
  celsius = lower;
  printf("%3s %6s\n", "C", "F");
  while(celsius <= upper){
    fahr = ((9.0/5.0) * celsius) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
