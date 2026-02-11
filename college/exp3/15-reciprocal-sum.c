// Series sum: 1/1+1/2+1/3+1/4+...+1/n
#include<stdio.h>
int main(){
  int n,i;
  float sum=0;
  printf("Enter n:");
  scanf("%d", &n);
  for(i=1;i<=n;i++){
    sum += 1.0/i;
  }
  printf("The sum is: %f\n", sum);
}
