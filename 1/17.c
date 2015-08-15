/* Exercise 1-17.  Write a program to print all input lines that
 * are longer than 80 characters. */
#include <stdio.h>
#define MAXLINE 1000
#define MAXLEN 10

 /* readline: read a line into s, return length */
int readline(char s[],int lim)
{
  int c, i;
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

int main(void){
  int c;
  int len; /* current line length */
  int max = MAXLEN; /* maximum length seen so far */
  char line[MAXLINE]; /* current input line */
  while ((len = readline(line, MAXLINE)) > 0){
    if(len > MAXLEN)
      printf("%d: ", len);
      printf("%s", line);
  }
}
