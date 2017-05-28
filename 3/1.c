/* Exercise 3-1. Our binary search makes two tests inside the loop,
when one would suffice (at the price of more tests outside.)
Write a version with only one test inside the loop and measure the
difference in run-time */
/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
#include<stdio.h>

int binsearch(int x, int v[], int n){
  int low, high, mid;
  low = 0;
  high = n - 1;
  mid = (low+high)/2;
  printf("low: %d, mid: %d, high: %d",low,mid,high);
  if (x < v[mid])
    high = mid + 1;
  else if (x > v[mid])
    low = mid + 1;
  else if (x == v[mid])
    return v[mid];
  while (low <= high) {
    /* 0, 4, 5 */
    if (x == low)
      return low;
    else
      ++low;
  }
  return -1;
  /* no match */
}

/* 0.003s loop times */
/* int binsearch(int x, int v[], int n){ */
/*   int low, high, mid;low = 0; */
/*   high = n - 1; */
/*   while (low <= high) { */
/*     mid = (low+high)/2; */
/*     if (x < v[mid]) */
/*       high = mid + 1; */
/*     else if (x > v[mid]) */
/*       low = mid + 1; */
/*     else */
/*     /1* found match *1/ */
/*     return mid; */
/*   } */
/*   return -1; */
/*   /1* no match *1/ */
/* } */

int main(void){
  int x = 4;
  int n = 10;
  int loop = 100000;
  int i = 0;
  int v[10] = {1,2,3,4,5,6,7,8,9,10};
  printf("Binsearch: %d\n",binsearch(x,v,n));
}
