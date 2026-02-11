// Function: matrix multiplication
#include <stdio.h>
void input(int x[][20], int r, int c);
void display(int x[][20], int r, int c);
void multiply(int a[][20],int b[][20],int r1,int c1,int r2,int c2);
int i,j,k;
int main() {
  int a[20][20], b[20][20];
  int r1, c1, r2, c2;
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
  input(a,r1,c1);
  printf("Enter elements of second matrix:\n");
  input(b,r2,c2);
  printf("\nMatrix A:\n");
  display(a,r1,c1);
  printf("\nMatrix B:\n");
  display(b,r2,c2);
  multiply(a,b,r1,c1,r2,c2);
  
  return 0;
}
void input(int x[][20],int r,int c){
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      scanf("%d", &x[i][j]);
    }
  }

}
void multiply(int a[][20],int b[][20],int r1,int c1,int r2,int c2){
  int c[20][20];
  for (i = 0; i < r1; i++) {
    for (j = 0; j < c2; j++) {
      c[i][j] = 0;
      for (k = 0; k < c1; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  printf("\nResultant matrix after multiplication:\n");
  display(c,r1,c2);

}
void display(int x[][20],int r,int c){
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      printf("%d\t", x[i][j]);
    }
    printf("\n");
  }

}
