// strupr
#include<stdio.h>
int main(){
  char a[50];
  int i;
  printf("Enter a string:");
  scanf("%s", a);

  for (i=0;a[i]!='\0';i++) {
    if (a[i]>=65 && a[i]<= 91) {
      a[i] += 32;
    }
  }
  printf("The uppercased string is: %s\n", a);
  return 0;
}
