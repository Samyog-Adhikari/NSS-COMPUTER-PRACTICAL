#include <stdio.h>

int main(){
  int a, result;
  printf("Enter One Number To Square It\n");
  scanf("%d", &a);
  result = a*a;
  printf("The square of %d is %d", a, result);
  return 0;
}