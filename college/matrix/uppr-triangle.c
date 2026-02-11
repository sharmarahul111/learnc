#include<stdio.h>
int main(){
  int a[20][20];
  int row, col, i,j;
  printf("Enter row/col:");
  scanf("%d %d", &row, &col);

  printf("Enter data:");
  for (i=0;i<row;i++) {
    for (j=0;j<col;j++) {
      scanf("%d", &a[i][j]);
    }
  }

  // display
  for (i=0;i<row;i++) {
    for (j=0;j<row;j++) {
      if (j<i) {
        printf("0\t");
      } else {
        printf("%d\t", a[i][j]);
      }
    }
    printf("\n");
  }
}
