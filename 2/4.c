/* Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes
 * each character in s1 that matches any character in the string s2. */
#include<stdio.h>

void squeeze(char s1[], char s2[])
{
int i, j, k, flag = 0;
printf("S1: %s\n", s1);
printf("S2: %s\n", s2);
char ans[80];
for (i = 0; s1[i] != '\0'; ++i){
  flag = 1;
  for (j = 0; s2[j] != '\0'; ++j){
    if(s1[i] == s2[j]){
      flag = 0;
    }
  }
  if(flag){
    ans[k] = s1[i];
    ++k;
  }
}
ans[k] = '\0';
printf("ans: %s\n", ans);

}
int main(){
  char s1[] = "abcdef";
  char s2[] = "defhij";
  squeeze(s1, s2);
}
