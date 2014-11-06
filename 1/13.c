/* Write a program to print a histogram of the lengths
 * of words in its input.  It is easy to draw the
 * histogram with the bars horizontally; a veritcal
 * orientation is more challenging */
#include <stdio.h>
main(){
  int c, i, mark, size;
  int wordsize = 10; /* keep track of words up to this size */
  int strlen[wordsize];
  mark = size = 0;
  for (i = 0; i < wordsize; ++i)
    strlen[i] = 0;
  while((c = getchar()) != EOF){
    /* ignore space, tab */
    if(mark == 0 && (c == '\t' || c == ' ')){
      /* Don't start count */
    }
    else if(mark == 1 && (c == '\t' || c == ' ' || c == '\n' )){
      /* record length and stop counting
       * size - 1 cuz array starts with 0 */
      ++strlen[size - 1];
      size = 0;
    }
    else{
      /* count string length with markers
       * (that's the theory at least) */
      mark = 1; /* you should be counting */
      ++size;
    }
    if(c == '\n'){
    /* if the user hits CR print the histogram */
      for (size = 0; size < wordsize; ++size){
        i = 0;
        printf("%d:", size + 1);
        while (i < strlen[size]){
        printf("#");
        ++i;
        }
        printf("\n");
      }
    /* start over */
      size = 0;
      mark = 0;
    }
  }
}
