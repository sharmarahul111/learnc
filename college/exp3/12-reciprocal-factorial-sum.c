// Series sum: 1/1!+1/2!+1/3!+1/4!+...+1/n!
#include<stdio.h>
int main(){
  int n,i,j,factorial;
  float sum=0;
  printf("Enter n:");
  scanf("%d", &n);
  for(i=1;i<=n;i++){
    factorial = 1;
    for (j=1;j<=i;j++) {
      factorial *= j;
    }
    sum += 1.0/factorial;
  }
  printf("The sum is: %f\n", sum);
}
