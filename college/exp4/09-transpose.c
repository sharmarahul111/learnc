// Transpose of a matrix
#include<stdio.h>
int main(){
  int a[20][20], b[20][20];
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
  printf("\n");
  for (i=0;i<row;i++) {
    for (j=0;j<col;j++) {
      b[j][i] = a[i][j];
    }
  }

  for (i=0;i<col;i++) {
    for (j=0;j<row;j++) {
      printf("%d\t", b[i][j]);
    }
    printf("\n");
  }



}
