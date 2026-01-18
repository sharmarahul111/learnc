// 3x3 Matrix multiplication
#include <stdio.h>
int main() {
  int a[20][20], b[20][20], c[20][20];
  int r1, c1, r2, c2;
  int i, j, k;
  printf("Enter row and column of 1st matrix:");
  scanf("%d %d", &r1, &c1);
  printf("Enter row and column of 2st matrix:");
  scanf("%d %d", &r2, &c2);

  // check if multiplication is possible
  if (c1 != r2) {
    printf("Multiplication not possible");
    return 0;
  }

  printf("Enter elements of first matrix:\n");
  for (i = 0; i < r1; i++) {
    for (j = 0; j < c1; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter elements of second matrix:\n");
  for (i = 0; i < r2; i++) {
    for (j = 0; j < c2; j++) {
      scanf("%d", &b[i][j]);
    }
  }
  for (i = 0; i < r1; i++) {
    for (j = 0; j < c2; j++) {
      c[i][j] = 0;
      for (k = 0; k < c1; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  printf("\nMatrix A:\n");
  for (i = 0; i < r1; i++) {
    for (j = 0; j < c1; j++) {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  printf("\nMatrix B:\n");
  for (i = 0; i < r2; i++) {
    for (j = 0; j < c2; j++) {
      printf("%d\t", b[i][j]);
    }
    printf("\n");
  }
  printf("\nResultant matrix after multiplication:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}
