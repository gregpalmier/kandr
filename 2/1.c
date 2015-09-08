/* Exercise 2-1. Write a program to determine the ranges of char, short, int, and long variables
 * both signed and unsigned by printing appropriate values from standard headers and by direct
 * computation. Harder if you compute them: determine the ranges of the various floating-point types. */
#include<stdio.h>
#include<limits.h>

int main(void){
  printf("schar_min: %d\n", SCHAR_MIN);
  printf("schar_max: %d\n", SCHAR_MAX);
  printf("uchar_max: %d\n", UCHAR_MAX);
  printf("int_min: %d\n", INT_MIN);
  printf("int_max: %d\n", INT_MAX);
  printf("uint_max: %d\n", UINT_MAX);
  printf("shrt_min: %d\n", SHRT_MIN);
  printf("shrt_max: %d\n", SHRT_MAX);
  printf("ushrt_max: %d\n", USHRT_MAX);
  printf("slong_min: %lu\n", LONG_MIN);
  printf("slong_max: %lu\n", LONG_MAX);
  printf("ulong_max: %lu\n", ULONG_MAX);
}
