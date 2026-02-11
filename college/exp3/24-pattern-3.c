/*
* 01111
* 20222
* 33033
* 44404
* 55550
*/
#include<stdio.h>
int main(){
  int i,j;

  for (i=1;i<=5;i++) {
    for (j=1;j<=5;j++) {
      if (i==j) {
        printf("0");
      } else {
        printf("%d",i);
      }
    }
    printf("\n");
  }
  return 0;
}
