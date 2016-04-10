/* Exercise 1-19.  Write a function _reverse(s)_ that reverses the
 * characters strings.  Use it to write a program that reverses its
 * input a line at a time. */
#include<stdio.h>
#include<string.h>

#define MAXLINE 100

/*reverse the string s*/
int reverse(char s[]){
  int i = 0;
  int j = 0;
  int k = 0;
  char t[MAXLINE];
  /* remove the \n char first */
  for(j = 0; s[j] != '\n'; ++j){
    if(s[j] == '\n')
      s[j] = '\0';
  }
  for(i = 0; s[j] != '\0'; ++i){
    t[i] = s[j];
    --j;
  }
  ++i;
  t[j] = '\0';
  /* re-add delimiter */
  printf("reversed: %s\n", t);
  return 0;
}

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
  while ((len = readline(phrase, MAXLINE)) > 0){
      printf("phrase: %s\n", phrase);
      reverse(phrase);
  }
}
