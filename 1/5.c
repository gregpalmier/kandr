/* Write a program to print the corresponding 
 * Celsius to Fahrenheit table in reverse order */
#include <stdio.h>
main(){
  float fahr, celsius;
  int step, lower, upper;
  step = 10; /* change up the step */
  lower = 0;
  upper = 300;
  celsius = upper;
  printf("%3s %6s\n", "C", "F");
  while(celsius >= lower){
    fahr = ((9.0/5.0) * celsius) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius - step;
  }
}
