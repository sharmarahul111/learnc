// strrev
#include<stdio.h>
int main(){
  char a[50], b[50];
  int i, len = 0;
  printf("Enter a string:");
  scanf("%s", a);

  for (i=0;a[i]!='\0';i++) {
    len++;
  }
  for (i=0;i<len;i++) {
    b[len-i-1] = a[i];
  }
  b[len] = '\0';
  printf("The reverse string is: %s\n", b);
  return 0;
}
