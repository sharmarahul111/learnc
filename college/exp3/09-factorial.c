#include<stdio.h>
int main(){
  int i,n, factorial=1;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i=1;i<=n;i++) {
    factorial *= i;
  }
  printf("\nThe factorial of %d is %d\n", n, factorial);
  return 0;
}
