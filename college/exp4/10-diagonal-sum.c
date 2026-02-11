// Sum of diagonals and all elements
#include<stdio.h>
int main(){
  int a[20][20], b[20][20];
  int i,j,row,col;
  int diag_sum = 0, sum=0;

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
      sum += a[i][j];
      if (i==j) {
        diag_sum += a[i][j];
      }
    }
  }

  printf("Diagonal Sum:%d", diag_sum);
  printf("\nTotal Sum:%d\n", sum);

 
  



}
