/* Experiment to find out what happens when printf's argument
 * string contains \c, where 'c' is some character not listed
 * above. */
#include<stdio.h>
main(){
  printf("%6s %10i", "string", 10);
  printf("\n");
}
