/* Write a program to print a histogram of the
 * frequencies of different characters in its input. */

/* Print the actual ANSI characters in the column
 * instead of the indices */
#include <stdio.h>
main(){
  int c, i, j, size, wordsize;
  int freq[123];
  /* init this.  prepare the increments */
  for (i = 0; i < 123; ++i){
    freq[i] = 0;
  }
  while((c = getchar()) != EOF){
    /* ignore space and tab */
    if(c == '\t' || c == ' '){
      /* Don't count */
    }
    else if(c != '\t' && c != ' ' || c != '\n' ){
      /* see an ansi table */
      ++freq[c];
    }
    if(c == '\n'){
    /* if the user hits CR print the histogram */
      for (i = 33; i < 123; ++i){
        j = 0;
        printf("%c:", i);
        while (j < freq[i]){
        printf("#");
        ++j;
        }
        printf("\n");
      }
    }
  }
}
