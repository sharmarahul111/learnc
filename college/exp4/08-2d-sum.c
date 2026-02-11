// sum of 2d matrices C=A+B
#include<stdio.h>
int main(){
  int a[20][20], b[20][20], c[20][20];
  int i,j,row,col;

  printf("Enter row and columns:");
  scanf("%d %d", &row, &col);
  printf("\nEnter array A:\n");

  for (i=0;i<row;i++) {
    for (j=0;j<col;j++) {
      printf("a[%d][%d]:", i,j);
      scanf("%d", &a[i][j]);
    }
  }
  printf("\nEnter array B:\n");
  for (i=0;i<row;i++) {
    for (j=0;j<col;j++) {
      printf("b[%d][%d]:", i,j);
      scanf("%d", &b[i][j]);
    }
  }
  printf("\n");
  for (i=0;i<row;i++) {
    for (j=0;j<col;j++) {
      c[i][j] = a[i][j]+b[i][j];
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }


}
