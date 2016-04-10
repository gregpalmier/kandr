/* Exercise 2-3. Write a function htoi(s), which converts a string of hexadecimal
 * digits (including an optional 0x or 0X) into its equivalent integer value.
 * The allowable digits are 0 through 9, a through f, and A through F. */
#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAXLINE 50
/* what about a long 0xA123CDEF string */
int htoi(char s[]){
int base, i, j, num;
double ans, val = 0;
int len = strlen(s);
  /* "123abc" */
  printf("len: %d\n", len);
  for (i = len; i >= 0; --i){
    val = 0;
    base = (len - i - 1);
    if (s[i] >= '0' && s[i] <= '9'){
      j = s[i] - '0';
      val = (j * pow(16, base));
      printf("0-9 num: %d, base: %d, pow: %f\n", j, base, val);
    }
    else if ((s[i] >= 'a' && s[i] <= 'f')){
      j = s[i] - 'W';
      val = (j * pow(16, base));
      printf("a-f num: %d, base: %d, pow: %f\n", j, base, val);
    }
    else if ((s[i] >= 'A' && s[i] <= 'F')){
      j = s[i] - ':';
      val = (j * pow(16, base));
      printf("A-F num: %d, base: %d, pow: %f\n", j, base, val);
    }
    ans = ans + val;
  }
  return ans;
}

/* be case senstive? */
int main(void){
int i;
char *test[] = { "123abc" };
/* chomp the 0x or 0X? */
/* count the max number of items in the array */
  for(i = 0; i < 12 ; ++i ){
    printf("send: %s\n\n", test[i]);
    printf("integer: %d\n\n", htoi(test[i]));
  }
}
