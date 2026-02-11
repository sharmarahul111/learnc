/*
* 1
* 01
* 101
* 0101
* 10101
*/
#include<stdio.h>
int main(){
  int i,j,a=0;

  for (i=1;i<=5;i++) {
    a = (i%2==0)?0:1;
    for (j=1;j<=i;j++) {
      printf("%d\t",a);
      a=(a==1)?0:1;
    }
    printf("\n");
  }
  return 0;

}
