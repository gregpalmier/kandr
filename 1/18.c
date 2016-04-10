/* Exercise 1-18.  Write a program to remove trailing blanks and tabs from
 * each line of input, and to delete entirely blank lines. */
#include<stdio.h>
#include<string.h>

#define MAXLINE 100

int filter(char t[]){
  int j;
  int last;
  /* find the last non-space, non-tab, non-delimeter char */
  for(j = 0; t[j] != '\n'; ++j){
    if((t[j] != '\t') && (t[j] != ' '))
      last = j;
  }
  ++last;
  t[last] = '\0';
  printf("non filtered length: %d\n", j);
  printf("filtered length: %d\n", last);
  printf("filtered phrase: %s\n", t);
  return 0;
}

/* readline: read a line into s, return length */
int readline(char s[],int lim)
{
  int c, i;
  for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0'; return i;
}

int main(void){
  int c;
  int i = 0;
  int len = 0;
  char phrase[MAXLINE];
  char line[MAXLINE];
  char t[MAXLINE];
  while ((len = readline(phrase, MAXLINE)) > 0){
      printf("phrase: %s\n", phrase);
      filter(phrase);
  }
}
