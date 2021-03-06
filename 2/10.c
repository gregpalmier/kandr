/*Exercise 2-10. Rewrite the function lower , which converts upper case letters to lower case,
 * with a conditional expression instead of if-else .*/
/* lower: convert c to lower case; ASCII only */
#include<stdio.h>
int lower(int c){
  int z;
  z = (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
  return z;
}

int main(void){
  int c;
  while((c = getchar()) != EOF){
    putchar(lower(c));
  }
}
