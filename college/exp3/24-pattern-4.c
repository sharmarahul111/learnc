/*
 * 1   2   3   2   1
 * 4   5   6   5   4
 * 7   8   9   8   7
 * 10  11  12  11  10
 */
#include <stdio.h>
int main() {
  int i, j,a;

  for (i = 1; i <= 4; i++) {
    a=i*3;
    for (j = -2; j <= 0; j++) {
      printf("%d\t",a+j);
    }
    for (j = -1; j >= -2; j--) {
      printf("%d\t",a+j);
    }
    printf("\n");
  }
  return 0;
}
