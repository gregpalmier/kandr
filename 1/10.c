/* Write a program to copy its input to its output,
 * replacing each tab by \t, each backspace by \b,
 * and each backslash by \\.  This makes tabs and
 * backspaces visible in an unambiguous way. */
/* not sure how to test the BSP on this */
#include <stdio.h>
main(){
  int c;
  int legit = 0;
  while((c = getchar()) != EOF ){
    legit = 0;
    if(c == '\t'){
      putchar('\\');
      putchar('t');
      legit = 1;
    }
    if(c == '\b'){
      putchar('\\');
      putchar('b');
      legit = 1;
    }
    if(c == '\\'){
      putchar('\\');
      putchar('\\');
      legit = 1;
    }
    if(legit == 0){
      putchar(c);
    }
  }
}
