/* Verify that the expression getchar() != EOF
 * is 0 or 1 */
#include <stdio.h>
main(){
  printf("Type Something\n");
  printf("!EOF = %6d", getchar() != EOF);
}
