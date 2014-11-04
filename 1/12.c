/* 1-12: Write a program that prints its input
 * one word per line. */
#include <stdio.h>
main(){
  int c;
  int nl = 0;
  int es = 0; /* "Ending Space " */
  while((c = getchar()) != EOF){
    /* make this work so that if the space is the last character
     * it doesn't add another CR =( */
    if(c == ' ' || c == '\t'){
      if(nl == 0){
        printf("\n");
        nl = 1;
      }
    }
    if(c != ' ' && c != '\t'){
      putchar(c);
      nl = 0;
    }
  }
}
