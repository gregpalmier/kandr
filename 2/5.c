/* Exercise 2-5. Write the function any(s1,s2), which returns the first location
 * in a string s1 where any character from the string s2 occurs, or -1 if s1
 * contains no characters from s2. (The standard library function strpbrk does
 * the same job but returns a pointer to the location.) */
#include<stdio.h>


int any(char s1[], char s2[]){
int i, j = 0;
printf("S1: %s\n", s1);
printf("S2: %s\n", s2);
char ans[80];
for (i = 0; s1[i] != '\0'; ++i){
  for (j = 0; s2[j] != '\0'; ++j){
    if(s1[i] == s2[j]){
      return i;
    }
  }
}
return -1;
}

int main(){
  char s1[] = "abcdef";
  char s2[] = "defhij";
  char s3[] = "mnlopq";
  printf("Location: s1[%d]\n", any(s1,s2));
  printf("Location: s1[%d]\n", any(s1,s3));
}
