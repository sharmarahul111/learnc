// strlen
#include<stdio.h>
int main(){
  char a[50];
  int i, len = 0;
  printf("Enter a string:");
  scanf("%s", a);

  for (i=0;a[i]!='\0';i++) {
    len++;
  }
  printf("The length of string is: %d\n", len);
  return 0;
}
