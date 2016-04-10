/* Exercise 2-2. Write a loop equivalent to the for loop above without using && or ||.
   for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
     s[i] = c;
*/
#include<stdio.h>
#define MAXLINE 80
int main(void){
int len = MAXLINE;
char s[len];
int c;
int i = 0;
while (i < (len - 1)){
  c = getchar();
  if (c == EOF)
    break;
  else if (c == '\n')
    break;
  s[i] = c;
  ++i; }
  s[i] = '\0';   /* terminate the string */
  printf("c: %s", s);
}
