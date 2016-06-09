/* Exercise 2-8. Write a function rightrot(x,n) that returns the value of the integer x
 * rotated to the right by n positions. */
#include<stdio.h>
unsigned rightrot(unsigned x, int n){

  /* get the last bit.
   * shift everything
   * set first bit to last */
  int lsb, msb, y;
  for (int j = 0; j < n; ++j){
    lsb = x & 1;
    msb = (x & ( 1 << 15 )) >> 15;
    printf("MSB: %d, LSB: %d\n", msb, lsb);
    x = x >> 1;
    x |= (lsb << 15);
    printf("Result = %d\n", x);
  }
  return x;
}

int main(){
  unsigned int x = 43690;
  int n = 16;
  printf("rightrot(%d,%d):\n", x,n);
  rightrot(x,n);
}
