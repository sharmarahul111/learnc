// strlwr
#include<stdio.h>
int main(){
  char a[50];
  int i;
  printf("Enter a string:");
  scanf("%s", a);

  for (i=0;a[i]!='\0';i++) {
    if (a[i]>=97 && a[i]<= 122) {
      a[i] -= 32;
    }
  }
  printf("The lowercased string is: %s\n", a);
  return 0;
}
