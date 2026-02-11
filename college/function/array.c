// Functiom: min, max, sum, input, display
void input(int x[], int n);
void display(int x[], int n);
int maximum(int x[], int n);
int minimum(int x[], int n);
int sum(int x[], int n);
int i;

#include<stdio.h>
int main(){
  // code
  int x[50];
  int n;
  printf("Enter size of number:");
  scanf("%d", &n);
  input(x,n);
  display(x,n);
  printf("\nMin=%d", minimum(x,n));
  printf("\nMax=%d", maximum(x,n));
  printf("\nSum=%d\n", sum(x, n ));
  return 0;
}
void input(int x[], int n){
  printf("Enter values of array elements:");
  for (i=0;i<n;i++) {
    scanf("%d", &x[i]);
  }
}
void display(int x[], int n){
  printf("\nThe array:");
  for (i=0;i<n;i++) {
    printf("%d\t", x[i]);
  }
}
int maximum(int x[], int n){
  int max = x[0];
  for (i=0;i<n;i++) {
    if (x[i]<max) {
      max=x[i];
    }
  }
  return max;
}
int minimum(int x[], int n){
  int min = x[0];
  for (i=0;i<n;i++) {
    if (x[i]>min) {
      min=x[i];
    }
  }
  return min;
}
int sum(int x[], int n){
  int sum=0;
  for (i=0;i<n;i++) {
    sum+=x[i];
  }
  return sum;
}
